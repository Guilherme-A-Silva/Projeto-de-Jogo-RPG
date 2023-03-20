Jogo RPG
---

Um Jogo RPG com Biblioteca propria e toda logica feita do 0. Feito 100% em C++

Tecnologias Utilizadas
---
+	Falcon C++ -> IDE

Entidades do Sistema
---
+ Modo de Um Jogador (Você joga contra uma I.A)
+ Modo de Dois Jogadores (Você pode jogar com um amigo, localmente)
+ Creditos
+ Manual de Instrução

Menu Principal
---

![Menu](https://user-images.githubusercontent.com/68473916/226351665-1e4ef232-f4ba-4f33-a26d-73e9a8dcbb6c.png)


Seleção de Classe

![Seleção](https://user-images.githubusercontent.com/68473916/226351936-a135ba59-781e-47ef-aa59-8ca485966937.png)


Menu de Combate

![MenuCombate](https://user-images.githubusercontent.com/68473916/226352060-0938c90c-ee50-4165-9645-93b194bf6b9c.png)

---

Versao: v0.2.5

Logica da Geração de Carta aleatoria

```c++
{
  Test1 = rand() % 100;
	Test2 = rand() % 100;
	Test3 = rand() % 100;

	// RAND VIDA
	if(Test1 > 0 && Test1 <= 20)
	{
		if(Test2 > 0 && Test2 <= 20)
		{
			if(Test3 > 0 && Test3 <= 20)
			{
				GG = 1;
				return CartaVida = rand() % 9;
			}
		}
	}

	// RAND DEFESA
	if(Test1 > 20 && Test1 <= 50)
	{
		if(Test2 > 20 && Test2 <= 50)
		{
			if(Test3 > 20 && Test3 <= 50)
			{
				GG = 2;
				return CartaDefesa = rand() % 9;
			}
		}
	}
	// RAND ATAQUE
	if(Test1 > 50 && Test1 <= 100)
	{
		if(Test2 > 50 && Test2 <= 100)
		{
			if(Test3 > 50 && Test3 <= 100)
			{
				GG = 3;
				return CartaAtaque = rand() % 9;
			}
		}
	}
	// RAND VIDA V2
	if(Test1 > 0 && Test1 <= 20)
	{
		if((Test2 > 0 && Test2 <= 20) || (Test3 > 0 && Test3 <= 20))
		{
			GG = 1;
			return CartaVida = rand() % 9;
		}
	}
	else if(Test2 > 0 && Test2 <= 20 && Test3 > 0 && Test3 <= 20)
	{
		GG = 1;
		return CartaVida = rand() % 9;
	}

	// RAND DEFESA V2
	if(Test1 > 20 && Test1 <= 50)
	{
		if((Test2 > 20 && Test2 <= 50) || (Test3 > 20 && Test3 <= 50))
		{
			GG = 2;
			return CartaDefesa = rand() % 9;
		}
	}
	else if(Test2 > 20 && Test2 <= 50 && Test3 > 20 && Test3 <= 50)
	{
		GG = 2;
		return CartaDefesa = rand() % 9;
	}

	// RAND ATAQUE V2
	if(Test1 > 50 && Test1 <= 100)
	{
		if((Test2 > 50 && Test2 <= 100) || (Test3 > 50 && Test3 <= 100))
		{
			GG = 3;
			return CartaAtaque = rand() % 9;
		}
	}
	else if(Test2 > 50 && Test2 <= 100 && Test3 > 50 && Test3 <= 100)
	{
		GG = 3;
		return CartaAtaque = rand() % 9;
	}
	// RAND CARTA CORINGA
	else
	{
		GG = 4;
		return 0;
	}
}
```
 
