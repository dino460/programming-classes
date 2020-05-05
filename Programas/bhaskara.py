print("")
print("CALCULADORA BHASKARA v1.0.0")
print("-Raphael Zoega Cali Gomes-")

print("")
print("-" * 30)
print("-" * 30)
print("")


import math

while True:
	qst = input("Deseja continuar? [S/N] ")
	print("")
	
	if qst == 'S' or qst == 's':
		try:
		
			a = float(input(">>> Qual é o valor de 'a'? "))
			b = float(input(">>> Qual é o valor de 'b'? "))
			c = float(input(">>> Qual é o valor de 'c'? "))
			print("")
				
			delta = (b**2) - (4 * a *c)
			print(">>> O delta é:", delta)
			
			if delta == 0:
				x = ((-b) + math.sqrt(delta)) / (2 * a)
				print(">>> A raiz é:", x)
				print("")
			
			elif delta < 0:
				print(">>> Não há raizes reais para os valores inseridos (delta < 0")
				print("")
				
			elif delta > 0:
				x1 = ((-b) + math.sqrt(delta)) / (2 * a)
				x2 = ((-b) - math.sqrt(delta)) / (2 * a)
				
				print(">>> As raizes são:", x1, "e", x2)
				print("")
				
			else:
				print(">>> IMPOSSÍVEL")
				print("")
			
			
		except ValueError:
			print('>>> Valor incorreto para a resposta')
			print("")
		
	elif qst == 'N' or qst == 'n':
		print('saindo...')
		print("")
		break
	
	else:
		print('>>> Valor incorreto para a resposta')
		print("")