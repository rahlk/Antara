// T: How many tests are you going to do?  TOP - FIRST LINE
// N: Dimension of Maze(nxn) First line of stdin
// P: 2N-2 string character, E(east) S(south) - represent lydia's path through maze.
// limits: 15s per T
//		   P contains exactly N-1E Characters & N-1S Characters
// lydia = 1
// me = 2 로 표기
#include <stdio.h>

int main(void) {
	int a = 0, b = 0, counter_down = 0, counter_right = 0, counter_overall = 0, counter_char = 0, case_counter = 0, count = 0, size;
	
	//printf("How Many?\n");
	scanf("%d", &count);
	
	for (int asdf = 0; asdf < count; asdf++) {
		scanf("%d", &size);
	
		int arr[size][size];
		char par[100], out[2*size];
		
		//printf("%d\n%d\n", size, 2*size);
	
		// Parse P
		//printf("Directions:\n");
		scanf("%s", par);
		
		a = 0;
		b = 0;
		counter_down = 0;
		counter_right = 0;
		counter_overall = 0;
		counter_char =0;
		
		//reset output array
		for (int i = 0; i < sizeof(out)/sizeof(char); i++) {
			out[i] = 0;
		}
	
		// Reset array
		for (int i = 0; i < 5; i++) {
			for (int a = 0; a < 5; a++) {
				arr[i][a] = 0;
			}
		}
	
		// Execute P - lydia, starts from 0,0
		for (int i = 0; i < sizeof(par)/sizeof(char); i++) {
			if (par[i] == 'E') {
				//오른쪽으로 한칸 이동
				b++;
				arr[a][b] = 1;
			} else if (par[i] == 'S') {
				//밑으로 한칸 이동
				a++;
				arr[a][b] = 1;
			}
		}
	
		//Reset last bits to 0
		arr[size-1][size-1] = 0;
	
		//ALGORITHM STARTS
		//순서: 오른쪽 - 아래쪽 OR 아래쪽 - 오른쪽
		//처음 순서 결정 --> 오른쪽 비트에 1이 존재하냐 안하냐
		if (arr[0][1] == 1) {
			a = 0;
			b = 0;
			//printf("EXIST");
			//오른쪽에 lydia's path존재 --> 아래쪽 - 오른쪽
			while (counter_overall < 1) {
				while (counter_right < 1) {
					while(counter_down < 1) {
						if (a == size-1) {
							break;
						} else {
							a++; //세로로 한칸 커서 이동
						}
						if (arr[a][b] != 1) { // 현재 커서에 lydia의 footpath가 존재하지 않을 경우
							arr[a][b] = 2;
							out[counter_char] = 'S';
							counter_char++;
							break;
						} else { //현재 커서에 lydia의 footpath가 존재함
							//이 부분에 수직 수평 확인해야됨 -이건 아래-위 확인이므로 수직확인절차가 됨
							if (arr[a-1][b] == 1 || arr[a+1][b] == 1) { //이건 수직
								a--; //커서 원위치
								break;
							} else if (arr[a-1][b] == 0) {  //이건 수직이 아님  || arr[a+1][b] == 0
								out[counter_char] = 'S';
								counter_char++;
								// = 2
								break;
							}
						}
					} //counter_down while ends
				
					if (b == size-1) {
						break;
					} else {
						b++; //가로로 한칸 커서 이동
					}
					if (arr[a][b] != 1) {
						arr[a][b] = 2;
						out[counter_char] = 'E';
						counter_char++;
						break;
					} else {
						//이 부분에 수직 수평 확인해야됨 -이건 옆 확인이므로 수평확인절차가 됨
						if (arr[a][b-1] == 1 || arr[a][b+1] == 1) { //이건 수평
							b--; //커서 원위치
							break;
						} else if (arr[a][b-1] == 0 || arr[a][b+1] == 0) {  //이건 수평이 아님
							out[counter_char] = 'E';
							counter_char++;
							break;
						}
					}
				} //counter_right ends
			
				if (arr[size-1][size-1] != 0) {
					break;
				}
			}
		} else if (arr[1][0] == 1) {
			a = 0;
			b = 0;
			//아래쪽에 lydia's path존재 --> 오른쪽 - 아래쪽
			while (counter_overall < 1) {
				while (counter_down < 1) {
					while (counter_right < 1) {
						//printf("B:%d, SIZE-1 = %d\n", b, size-1);
						if (b == size-1) {
							break;
						} else {
							b++; //가로로 한칸 커서 이동
						}
						if (arr[a][b] != 1) {
							arr[a][b] = 2;
							out[counter_char] = 'E';
							counter_char++;
							break;
						} else {
							//이 부분에 수직 수평 확인해야됨 -이건 옆 확인이므로 수평확인절차가 됨
							if (arr[a][b-1] == 1 || arr[a][b+1] == 1) { //이건 수평
								b--; //커서 원위치
								break;
							} else if (arr[a][b-1] == 0 || arr[a][b+1] == 0) {  //이건 수평이 아님
								out[counter_char] = 'E';
								counter_char++;
								break;
							}
						}
					}
					if (a == size-1) {
						break;
					} else {
						a++; //세로로 한칸 커서 이동
					}
					if (arr[a][b] != 1) { // 현재 커서에 lydia의 footpath가 존재하지 않을 경우
						arr[a][b] = 2;
						out[counter_char] = 'S';
						counter_char++;
						break;
					} else { //현재 커서에 lydia의 footpath가 존재함
						//이 부분에 수직 수평 확인해야됨 -이건 아래-위 확인이므로 수직확인절차가 됨
						if (arr[a-1][b] == 1 || arr[a+1][b] == 1) { //이건 수직
							a--; //커서 원위치
							break;
						} else if (arr[a-1][b] == 0) {  //이건 수직이 아님  || arr[a+1][b] == 0
							out[counter_char] = 'S';
							counter_char++;
							// = 2
							break;
						}
					}
				}
				if (arr[size-1][size-1] != 0) {
					break;
				}
			}
		} //ALGORITHM ENDS
	
	
		//DEBUG = CHECK
		/*for (int i = 0; i < size; i++) {
			for (int a = 0; a < size; a++) {
				printf("%d ", arr[i][a]);
			}
			printf("\n");
		}*/
	
		printf("Case #%d: %s\n", case_counter+1, out);
	}	
	return 0;
}