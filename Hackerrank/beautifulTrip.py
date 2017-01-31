
def main():
	u  = raw_input()
	k = u.split()
	y = [int(x) for x in k]
	n = y[0]
	d = y[1]
	c = map(int, raw_input().split())
	gc =0
	for i in range(n):
	    if c[i]+d in c and c[i]+2*d in c:
	        gc+=1
	print (gc)

if __name__ == '__main__':
	main()
