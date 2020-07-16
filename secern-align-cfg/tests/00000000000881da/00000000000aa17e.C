		/*
		bool cross = 1;
		int numLydiaE = 0;
		int numLydiaS = 0;
		int numMyE = 0;
		int numMyS = 0;

		for (int curMove=0; numMove<2*mazeDimension-2; numMove++){

            if(cross == 1){
                if (LydiaPath[curMove]=='E')
                {
                    MyPath[curMove] = 'S';
                    numLydiaE += 1;
                    numMyS += 1;
                }
                else
                {
                    MyPath[curMove] = 'E';
                    numLydiaS += 1;
                    numMyE += 1;
                }
                cross = 0;
            }

            else {
                MyPath[curMove] = LydiaPath[curMove-1];
                if (MyPath[curMove]=='E'){
                    numMyE += 1;
                    numLydiaS
                }
                elif (MyPath[curMove]=='S'){

                }

                if (numMyE==numLydiaE && numMyS==numLydiaS){
                    cross = 1;
                }

            }

		}