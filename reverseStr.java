package player;

public class reverseStr {
	public static void main(String args[])
	{
		String strOriginal =" hai";
		System.out.println("Original String :"+strOriginal);
		strOriginal = new StringBuffer(strOriginal).reverse().toString();
		System.out.println("reversed String :"+strOriginal);
	}

}
