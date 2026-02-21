no = int(input())
teams = []
for i in range(no):
    teams.append(str(input()))
mat = int(input())
res = {}
wcnt = {}
for i in range(mat):
   ip = list(input().split())
   if ip[1] > ip [3]:
       wcnt[ip[0]] = wcnt.get(ip[0],0)+2
   elif ip[1] == ip[3]:
       wcnt[ip[0]] = wcnt.get(ip[0],0)+1
       wcnt[ip[2]] = wcnt.get(ip[2],0)+1
   else:
        wcnt[ip[2]] = wcnt.get(ip[2],0)+2
   for i in range(0,len(ip),2):
       res[ip[i]] = res.get(ip[i],0)+float(ip[i+1])

fres = []
for i in range(no):
    fres.append((teams[i],wcnt[teams[i]],res[teams[i]]))
    

s_fres = sorted(fres,key = lambda x: (x[1],x[2]),reverse=True)
for i in range(no):
    print(' '.join(map(str,s_fres[i])),end='\n')
    
'''
Currently the fifth edition of Indian Premier League (IPL-5) is going on and the overall point table is changing after every match. The point table is based on the match result (win/loss) and the net run rate of each team.
You have to write a C/Java program to create point table from the results of given set of matches. You will also have to find the net run rate of each team. Consider the following while preparing the point table:
1.      The net-run rate of each team is summed up after every match.
2.      The team which has better net run rate is the winner of the match
3.      The team winning the match, is awarded 2 points. In case of loss, no point will be deducted from the losing team.
4.      If the run rate of both teams is same in a particular match, the match will be is consider as draw and 1 point will be awarded to each team.
5.      If two teams have same points, the team who has better net run-rate will be up in the table.
Note: Assume no two teams will have same points as well as same net run-rate.  

1.  First line will contains an integer N indicating number of teams
2. Next N lines will be the names of the teams, a single string (0 < length of string < 20)
3.      Next line will contain an integer M indicating number of matches
4.      Next M line will contain the match result. In the following format

1. Print the team name, total points and net run rate in decreasing order of their standing in the point table. Points for each team should be printed on a separate line
2.  Output should be terminated by a new line character.

Sample Input
4
A
B
C
D
5
A 1.0 B 2.0
B 1.0 C 2.1
D 2.5 A 1.2
B 1.5 D 1.0
C 1.2 A 2.0
Sample Output
B 4 4.50
A 2 4.20
D 2 3.50
C 2 3.30
'''