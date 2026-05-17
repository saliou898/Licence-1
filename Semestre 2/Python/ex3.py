n=3
c1=int(input("Donner le nombre de votant pour C1: "))
c2=int(input("Donner le nombre de votant pour C2: "))
c3=int(input("Donner le nombre de votant pour C3: "))
c4=int(input("Donner le nombre de votant pour C4: "))
total=c1+c2+c3+c4
s1=(c1/total)*100
s2=(c2/total)*100
s3=(c3/total)*100
s4=(c4/total)*100
if (s1>50):
    print("Elus 1er tour")
elif(s1<12.5):
    print("Battue")
else:
    if(s1>s2 and s1>s3 and s1>s4):
        print("Ballotage favorable")
    else:
        print("Ballotage devaforable")
    