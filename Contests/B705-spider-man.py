# Game theory
# Let current test be x, player one wins the game if he either (wins the current subgame with
# the newly added circle and did not win the previous test) or (does not win the current subgame but
# won the previous test). This is xor (winning current subgame) with (winning previous game for test (x-1)th).
# To determine if player 1 wins current subgame: if circle added is even, player one wins, otherwise he loses
# Reason is: if vertex is even, it can be broken into two even numbers. If player two takes any of the sub 
# circle, player two wins, but that means player one can take the other even sub circles and win the current 
# circle (if one player wins, it means the other player cannot find any further way to advance, so that player 
# has to reach out beyond his sub circle). Now if in the previous test player one also won, that means player 
# two can turn to circles from the previous test and win the overall game. If in the previous test player one 
# loses, player two cannnot do the same thing, so winner still remains player one. Therefore, we do need to check 
# both the previous state of the game and the current circle. The even number of vertices can also be separated 
# into two odd numbers. If player two takes any of the sub circle, he loses, and if he tries to take the other
# odd sub circle, he loses too. Again we do need to check with the previous state to conclude who wins the entire game.
input()
a = map(int, raw_input().split())
m = 0
for x in a:
	print 2 - (m^(~x&1))
	m = m^(~x&1)
