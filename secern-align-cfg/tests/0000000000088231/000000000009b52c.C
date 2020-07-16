int_no = int(input())
for i in range(int_no):
    sum1 = int(input())
    start = 0
    end = sum1 - 1
    while(start < end):
        sum2 = sum([start,end])
        if(sum2 == sum1 and '4' not in str(start) and '4' not in str(end)):
                print("Case #"+str(i+1)+": "+str(start)+" "+str(end))
                break
        elif(sum2 > sum1):
                if '4' in str(end)[0]:
                    end -= 10 ** (len(str(end)) - 1 )
                else:
                    end -= 1
        else:
            if '4' in str(start)[0]:
                start += 10 ** (len(str(start)) - 1)
            else:
                start += 1