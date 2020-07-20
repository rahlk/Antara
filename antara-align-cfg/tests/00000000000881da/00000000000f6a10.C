#include <stdio.h>

int main(void) {
	int a = 0, b = 0, counter_down = 0, counter_right = 0, counter_overall = 0, counter_char = 0, case_counter = 0, count = 0, size;
	int arr[10][10];
	char par[20], out[20];
	
	scanf("%d", &count);
	
	for (int asdf = 0; asdf < count; asdf++) {
		scanf("%d", &size);
		
		if (size < 2) {
			//error
			return 0;
		} else {
			scanf("%s", par);
			a = 0;
			b = 0;
			counter_down = 0;
			counter_right = 0;
			counter_overall = 0;
			counter_char =0;

			for (int i = 0; i < sizeof(out)/sizeof(char); i++) {
				out[i] = 0;
			}

			for (int i = 0; i < 5; i++) {
				for (int a = 0; a < 5; a++) {
					arr[i][a] = 0;
				}
			}

			for (int i = 0; i < sizeof(par)/sizeof(char); i++) {
				if (par[i] == 'E') {
					b++;
					arr[a][b] = 1;
				} else if (par[i] == 'S') {
					a++;
					arr[a][b] = 1;
				}
			}
			arr[size-1][size-1] = 0;
			if (arr[0][1] == 1) {
				a = 0;
				b = 0;
				while (counter_overall < 1) {
					while (counter_right < 1) {
						while(counter_down < 1) {
							if (a == size-1) {
								break;
							} else {
								a++;
							}
							if (arr[a][b] != 1) {
								arr[a][b] = 2;
								out[counter_char] = 'S';
								counter_char++;
								break;
							} else { 
								if (arr[a-1][b] == 1 || arr[a+1][b] == 1) { //이건 수직
									a--; //커서 원위치
									break;
								} else if (arr[a-1][b] == 0) {  //이건 수직이 아님  || arr[a+1][b] == 0
									out[counter_char] = 'S';
									counter_char++;
									break;
								}
							}
						}
				
						if (b == size-1) {
							break;
						} else {
							b++;
						}
						if (arr[a][b] != 1) {
							arr[a][b] = 2;
							out[counter_char] = 'E';
							counter_char++;
							break;
						} else {
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
				while (counter_overall < 1) {
					while (counter_down < 1) {
						while (counter_right < 1) {
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
						} else { 
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
			printf("Case #%d: %s\n", case_counter+1, out);
			case_counter++;
		}
	}	
	return 0;
}