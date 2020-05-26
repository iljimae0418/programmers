from collections import deque

def solution(heights):
    answer = []
    for i in range(len(heights)-1,0,-1):
        sent = False
        for j in range(i-1,0,-1):
            if heights[j] > heights[i]:
                sent = True
                answer.append(j+1)
                break
        if sent == False:
            answer.append(0)
    answer.append(0)
    answer = answer[::-1]
    return answer
