def QuestionsMarks(s): 
    numbers = '1234567890'
    lastDigit = None
    answer = 'false'
    for i in range(0, len(s)):
        if s[i].isdigit():
            if lastDigit:
                if int(s[i]) + int(s[lastDigit]) == 10:
                    if s[lastDigit:i].count('?') == 3:
                        answer = 'true'
                    else:
                        return 'false'
            lastDigit = i
    
    return answer    
print QuestionsMarks(raw_input())