a = [5,4,3,2,1]
b=[]
c=[]

def  move(n, source, target, auxillary):
	
	if n>0:
		move(n-1, source, auxillary, target)
	
		target.append(source.pop())

		print (a,b,c)

		move(n-1,auxillary, target, source)

if __name__ == '__main__':
	move(5,a,c,b)