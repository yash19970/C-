from itertools import permutations
t = input()
for j in range(0,t):
	s = raw_input()
	li = []
	b = len(s)
	for i in range(0,b):
		li.append(s[i])
	p = permutations(li)
	k = p.next()
	k2 = p.next()
	if(not k2):
		print 'no answer'
		print '\n'
	else:
		li2 = [ w for w in k2]
		print ''.join(li2)
		print '\n'

