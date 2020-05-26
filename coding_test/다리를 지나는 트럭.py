from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0
    track = 0 # the tracking sum  
    q = deque() 
    idx = 0 
    while True: 
        answer += 1 
        if len(q) == bridge_length: 
            track -= q.popleft() 
        if track + truck_weights[idx] <= weight: 
            if idx == len(truck_weights)-1: 
                answer += bridge_length 
                break 
            q.append(truck_weights[idx])
            track += truck_weights[idx]
            idx += 1 
        else: 
            q.append(0)
    return answer
