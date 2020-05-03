public class Q3{

	private int j = -3;
	private int i;

	for(i = 0; i < 3; i++){
		int k = j + 2;

		if(k == 3)
			// ...

		if(k == 2)
			j--;
		if(k == 0)
			j += 2;
		else
			j = 0;

	}

	if(j > 0)
		// ...
	j = 3 - i;
}