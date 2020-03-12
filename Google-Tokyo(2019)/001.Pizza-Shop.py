https://leetcode.com/discuss/interview-question/356935/

            /*
            int min=INT_MAX;
                 if(abs(target-dp[i-1][j])<min){
                     dp[i][j]=dp[i-1][j];
                     min=abs(target-dp[i-1][j]);
                 }
                 else  if(abs(target-dp[i][j-1])<min){
                     dp[i][j]=dp[i][j-1];
                     min=abs(target-dp[i][j-1]);
                 }
                 else  if(abs(target-(piz[i - 1] + top[j - 1]))<min){
                     dp[i][j]=piz[i - 1] + top[j - 1];
                     min=abs(target-piz[i - 1] + top[j - 1]);
                 }
            
            
            */
def find_piz_top(piz, top, target):
    
    Lp = len(piz) # length of pizzas
    Lt = len(top) # length of topings
    piz.sort() # sort them so that we get cheapest pizza (to counter the fact that abs(1100 - 1000) == abs(900 - 1000)) 
    top.sort() # same here 
    dp = [[0] * (Lt + 1) for i in range(Lp + 1)]
    dp[0][1:] = piz # assign the first row as given pizzas

    for i in range(1, Lp + 1):
        for j in range(1, Lt + 1):
            mini=999999999;
            if abs(target-dp[i-1][j])<mini:
                dp[i][j]=dp[i-1][j];
                mini=abs(target-dp[i-1][j])                    
            if abs(target-dp[i][j-1])<mini:
                dp[i][j]=dp[i][j-1];
                mini=abs(target-dp[i][j-1]);
            if abs(target-(piz[i - 1] + top[j - 1]))<mini :
                dp[i][j]=piz[i - 1] + top[j - 1];
                mini=abs(target-(piz[i - 1] + top[j - 1]));
                 
            if dp[i][j] == target: # if we found the exact match we can just return it.
                return target

    return dp[i][j]

print(find_piz_top([1100, 900], [200], 1000) == 900)
print(find_piz_top([850, 900], [200, 250], 1000) == 1050)
print(find_piz_top([1100, 900], [200], 1000) == 900)
print(find_piz_top([800, 800, 800, 800], [100], 1000) == 900)     
