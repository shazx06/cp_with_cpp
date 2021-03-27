def weird(s):
    chr_count=0
    odd=[]
    even=[]


    for i in s:
        if i.isdigit():
            if (int(i))%2==0:
                even.append(i)
            else :
                odd.append(i)
        else:
            chr_count+=1
    min_len=min(len(odd), len(even))
    res=[]
    if chr_count%2!=0:
        for i in range(min_len):
            res.append(even.pop(0))
            res.append(odd.pop(0))
        res+=even
        res+=odd

    else :
        for i in range(min_len):
            res.append(odd.pop(0))
            res.append(even.pop(0))
        res+=odd
        res+=even
    odd.clear()
    even.clear()



    print("".join(res))
    
weird('*/24#5%7&9*3@')
        
            


