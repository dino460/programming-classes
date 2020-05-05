print("")
print("CALCULADORA DE SALÁRIO v1.0.0")
print("-Raphael Zoega Cali Gomes-")

print("")
print("-" * 30)
print("-" * 30)
print("")


while True:
	qst = input("Deseja continuar? [S/N] ")
	
	if qst == 'S' or qst == 's':
		try:
		
			diaria = 20.00
			imposto = 0.92
			
			w_days = int(input('Quantos dias de trabalho? '))
			print("")
			
			v_lqd = (diaria * w_days) * imposto
			
			print('>>>', w_days, '*', diaria, '*', imposto)
			print('Seu salário é:', v_lqd)
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