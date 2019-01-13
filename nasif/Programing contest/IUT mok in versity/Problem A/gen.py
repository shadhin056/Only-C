from __future__ import print_function
from random import randint

def main():
	totalLine=970;
	print(totalLine);
	for i in range(0,totalLine):
		K=randint(1,100);
		print(K, end="");

		while (1==1):
			firstNum=randint(-2147483648, 2147483647);
			if(firstNum!=0):
				break;

		print(" {0}".format(firstNum), end="");

		for j in range (1, K):
			num=randint(-2147483648, 2147483647);
			print(" {0}".format(num), end="");

		print("");

	
if __name__ == "__main__":
    main();