/* RPSGame.nxc
 * Program to teach RPSGame robot to learn how to play rock-paper-scissors
 *
 * Bryant
 * Finished 4/17/11
*/

/* 3 User Inputs: Rock - Paper - Scissors
 * 3 Robot Actions: Rock - Paper - Scissors
 * 3 Possible Results: Win - Loss - Tie
 */
#define INPUTS   3
#define CHOICES  3
#define RESULTS  3

//Sensor Port Definitions
//1 is Rock
//2 is Paper
//3 is Scissors
//All 3 sensors are Touch Sensors
#define BUMPER_PORT1  S1
#define BUMPER_PORT2  S2
#define BUMPER_PORT3  S3

#define BUMPER1        SENSOR_1
#define BUMPER2        SENSOR_2
#define BUMPER3        SENSOR_3

//Epsilon Variables

/* Epsilon is the probability that the robot will use learned information
 * over a random action.  EPSILON_MAX is set to the highest value to encourage
 * the robot to try and learn from random actions.  Epsilon decreases over time
 * as it makes a new move, so eventually, the robot will use it's knowledge database
 * to determine its next move rather than perform a random move.
*/

#define EPSILON_MAX 0.99
#define EPSILON_MIN 0.02
#define EPSILON_DECAY   0.07

//Modifiable version of EPSILON_MAX
float epsilon = EPSILON_MAX;

/* Other variables:
 * ALPHA controls how much each individual move affects the robot's behavior.
 *	The higher ALPHA is to 1.00, each move made by the robot will affect the robot more.
 *	The robot will learn faster, but an incorrect move will be harder to rectify.
 *
 * GAMMA controls the value of the future for the robot.  The higher GAMMA is to 1.00, the robot
 * is more likely to perform actions it knows rather than trying new moves.
 * 
 * KAPPA is an integer "thoroughness" looping value that allows the robot to have more refined values in its table.
 * The higher KAPPA is, the more time the robot will take to process data, but the robot will make better moves
 * in the future
*/
#define ALPHA 0.20
#define GAMMA 0.80
#define KAPPA 10

/* Q - Score Arrays:
 * Playresults keeps the success rates of the robot.  It calculates a success rate using three factors:
 * 1) The player's move; 2) The robot's move; and 3) The result (win/loss/tie).
 * Qscores is a lookup table of success rates that helps the robot pick a winning move!
*/
float playresults[INPUTS][CHOICES][RESULTS];
float qscores[INPUTS][CHOICES];

//Norm_random returns a random number between 0 and 1 to determine whether the robot
//should make a random move or use its knowledge database
float norm_random()
{
	    //We just need a random value to 1 decimal place, so we create a random number between 0 and 9
	    //then divide it by 10
      float x = Random(10);
      x /= 10;
      return x;
}//end method norm_random

//Array_Initialization resets all arrays
void array_initialization()
{
	   //looping variables
     int i, j, k;
     
	   //loop through all Inputs
     for(i = 0; i < INPUTS; i++)
     {
		       //loop through all Choices
           for(j = 0; j < CHOICES; j++)
           {
			           //loop through all Results
                 for(k = 0; k < RESULTS; k++)
                 {
					             //To ensure that the robot will pick a move equally, each success probability is resetted
					             //to 1/3
                       playresults[i][j][k] = (1 / INPUTS);
                 }//end for
           }//end for
     }//end for
     
	   //loop through all results
     for(i = 0; i < RESULTS; i++)
     {
	         //loop through all choices
           for(j = 0; j < CHOICES; j++)
           {
				         //reset the success probability look-up table to 0
                 qscores[i][j] = 0;
           }//end for
     }//end for
}//end method array_initialization

//getResult is a helper method that returns a numerical interpretation of a win/loss/tie
int getResult()
{
	  //temp. variable that holds the result
    int result = 0;
    
	  //erase the screen
    ClearScreen();
	  //ask the player if the robot won
    TextOut(0, LCD_LINE1, "Did I win?");
	
	  //pause until the player enters a result
    while(!BUMPER1 && !BUMPER2 && !BUMPER3);

    //If the robot won...
    if(BUMPER1)
    {
		     //play a high tone
         PlayTone(560, 500);
         ClearScreen();
		     //The robot won! A win is a 0.
         TextOut(0, LCD_LINE1, "Yes!");
         result = 0;
         Wait(1000);
    }//end if
	
	//Otherwise, if the robot lost...
    else if(BUMPER2)
    {
		//play a low tone
         PlayTone(440, 500);
         ClearScreen();
		 //The robot lost!  A loss is a 1.
         TextOut(0, LCD_LINE1, "No!");
         result = 1;
         Wait(1000);
    }//end else if
	
	//Otherwise, if the robot tied...
    else if(BUMPER3)
    {
		//play a medium tone
         PlayTone(500, 500);
         ClearScreen();
		 //The robot tied!  A tie is a 2.
         TextOut(0, LCD_LINE1, "Tie!");
         result = 2;
         Wait(1000);
    }//end else if
    
	  //return the numerical result
    return result;
}//end method getResult

//getInput is similar to getResult, but returns
//a numerical interpretation of the player's move
int getInput()
{
     //temp. variable that holds the player's move
     int result = 0;

     //ask the player for a move
     ClearScreen();
     TextOut(0, LCD_LINE1, "Your Move?");
     
     while(!BUMPER1 && !BUMPER2 && !BUMPER3);

     //if the left sensor is pressed...
     if(BUMPER1)
     {
           //Player chose Rock!  Result is 0
           ClearScreen();
           TextOut(0, LCD_LINE1, "ROCK");
           PlayTone(440, 500);
           result = 0;
           Wait(1000);
     }//end if
     
     //if the center sensor is pressed...
     else if(BUMPER2)
     {
           //Player chose Paper!  Result is 1
           ClearScreen();
           TextOut(0, LCD_LINE1, "PAPER");
           PlayTone(500, 500);
           result = 1;
           Wait(1000);
     }//end else if

     //if the right sensor is pressed...
     else if(BUMPER3)
     {
           //Player chose Scissors!  Result is 2
           ClearScreen();
           TextOut(0, LCD_LINE1, "SCISSORS");
           PlayTone(560, 500);
           result = 2;
           Wait(1000);
     }//end else if
     
     //return the player's move
     return result;
}//end method getInput

//makeMove just moves the arm of the robot's move
//For example, if the robot picked rock, it will move
//the left arm.
void makeMove(int movement)
{

     //NOTE: Case 0 is rock, Case 1 is Paper, Case 2 is Scissors
     switch(movement)
     {
        case 0:
             PlayTone(440, 500);
             OnFwd(OUT_A, 75);
             Wait(200);
             Off(OUT_A);
             break;
             
        case 1:
             PlayTone(500, 500);
             OnFwd(OUT_B, 75);
             Wait(200);
             Off(OUT_B);
             break;

        case 2:
             PlayTone(560, 500);
             OnFwd(OUT_C, 75);
             Wait(200);
             Off(OUT_C);
             break;
             
        default:
             ClearScreen();
             TextOut(0, LCD_LINE1, "ERROR");
             Wait(2000);
             return;
             break;
    }
}//end method makeMove

//retractArm causes the arm to return to its original position.
//Like makeMove, 0 is Rock, 1 is Paper, 2 is Scissors
void retractArm(int arm)
{
     switch(arm)
     {
         case 0:
              OnRev(OUT_A, 75);
              Wait(200);
              Off(OUT_A);
              break;
         case 1:
              OnRev(OUT_B, 75);
              Wait(200);
              Off(OUT_B);
              break;
         case 2:
              OnRev(OUT_C, 75);
              Wait(200);
              Off(OUT_C);
              break;
         default:
              ClearScreen();
              TextOut(0, LCD_LINE1, "ERROR");
              Wait(2000);
              return;
              break;
     }
}//end method retractArm
              
//This method is the most important method.  This is the decision making method
//for the robot
void move()
{
     //initialize variables
     int i;
     int max_q_score = 0;
     int next_movement = -1;
     //get the user's input
     int initial_input = getInput();
     int result;
     
     //if the random number generated is greater than epsilon...
     //I.e. the probability that the robot will use learned information
     //is higher than the probability of using a random move
     if(norm_random() > epsilon)
     {
           //Use learned information
           ClearScreen();
           TextOut(0, LCD_LINE1, "I'm thinking...");
           Wait(1000);
           
           //loop through all possible choices
           for(i = 0; i < CHOICES; i++)
           {
                //use the lookup table to determine what the best
                //move to make to counter the player's move
                if(qscores[initial_input][i] > max_q_score)
                {
                     //find the move with the highest success rate
                     //and store if
                     max_q_score = qscores[initial_input][i];
                     next_movement = i;
                }//end if
           }//end for
     }//end if
     
     //Otherwise, make a random move!
     else
     {
        //Display "I'm guessing" and pick a random move from 0 to 2
        //0 is Rock
        //1 is Paper
        //2 is Scissors
        float temp = norm_random();
        ClearScreen();
        TextOut(0, LCD_LINE1, "I'm guessing...");
        Wait(1000);
        next_movement = (temp * CHOICES);
     }//end else
     
     //If a move is selected (this is an error-handling code)
     if(next_movement == -1)
     {
          //just make a random move!
          float temp = norm_random();
          ClearScreen();
          TextOut(0, LCD_LINE1, "I'm guessing...");
          Wait(1000);
          next_movement = (temp * CHOICES);
     }//end if
     
     
     //Now that the robot selected its next move, execute it!
     switch(next_movement)
     {
         case 0:
              ClearScreen();
              TextOut(0, LCD_LINE1, "Rock");
              Wait(1000);
              makeMove(0);
              break;
              
         case 1:
              ClearScreen();
              TextOut(0, LCD_LINE1, "Paper");
              Wait(1000);
              makeMove(1);
              break;

         case 2:
              ClearScreen();
              TextOut(0, LCD_LINE1, "Scissors");
              Wait(1000);
              makeMove(2);
              break;

         default:
              ClearScreen();
              TextOut(0, LCD_LINE1, "CRITICAL ERROR");
              break;
              
     }//end switch

     //Ask if the robot won/loss/tied
     ClearScreen();
     TextOut(0, LCD_LINE1, "Did I Win?");
     
     int playerResult = getResult();
     
     //update the success probabilities tables
     playresults[initial_input][next_movement][result] += ALPHA;
     
     for(i = 0; i < INPUTS; i++)
     {
           playresults[initial_input][next_movement][i] /= (1 + ALPHA);
     }
     
     //if epsilon is still too high
     if(epsilon > EPSILON_MIN)
     {
                //we DECREASE epsilon to INCREASE the probability
                //that the robot will use the tables next round
                epsilon -= EPSILON_DECAY;
     }//end if
     
     //reset the arms for the next round
     retractArm(next_movement);
}//end method move

//this method generates the lookup tables for the robot
void qscoreupdate()
{
     //looping variables
     int i, j, k, l;
     
     //reward variable for the robot
     float reward = 0;
     
     //temporary success probability variables
     float q_sum;
     float max_q_score;

     //loop through all Inputs
     for(i = 0; i < INPUTS; i++)
     {
           //look through all Choices
           for(j = 0; j < CHOICES; j++)
           {
                 //These are the conditions in which the robot loses or ties
                 //If the robot loses, take away 10,000 points!
                 if((i == 0 && j == 0) || (i == 0 && j == 2) || (i == 1 && j == 0) || (i == 1 && j == 1) || (i == 2 && j ==1) || (i == 2 && j == 2))
                 {
                       reward = -10000;
                 }//end if
                 
                 //otherwise, the robot must win; reward it with a virtual point!
                 else
                 {
                       reward = 1;
                 }//end else

                 q_sum = 0;
                 
                 //loop through all Inputs
                 for(k = 0; k < INPUTS; k++)
                 {
                       max_q_score = 0;
                       
                       //loop through all Choices
                       for(l = 0; l < CHOICES; l++)
                       {
                             //Find the highest success rate for a given player move
                             //and robot move and store it
                             if(qscores[k][l] > max_q_score)
                             {
                                  max_q_score = qscores[k][l];
                             } //end if
                       }//end for
                       
                       //sum up this probability to update the table
                       q_sum += (playresults[i][j][k] * max_q_score);
                 }//end for
                 qscores[i][j] = reward + (GAMMA * q_sum);
           }//end for
     }//end for
}//end method qscoreupdate
            
//Main method!  This is what the robot runs.
task main()
{
	   //Initialize all sensors as Touch Sensors
     SetSensorTouch(BUMPER_PORT1);
     SetSensorTouch(BUMPER_PORT2);
     SetSensorTouch(BUMPER_PORT3);
	
     //loop helper variable
     int k;
     
     //initialize all arrays
     array_initialization();
     
     //Repeat forever until the player quits (or the batteries die!)
     while(1)
     {
           //erase the screen
           ClearScreen();

           //Get the player's move and make a move!
           move();

           //Clear Screen and display "I'm Learning!"
           ClearScreen();
           TextOut(0, LCD_LINE1, "I'm Learning!");
           Wait(2000);
           
           //Refine the success probabilities for the future
           for(k = 0; k < KAPPA; k++)
           {
                  qscoreupdate();
           }//end for
     }//end while
}//end main method