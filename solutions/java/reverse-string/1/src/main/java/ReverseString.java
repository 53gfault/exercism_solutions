class ReverseString {

    String reverse(String inputString) {
        StringBuilder rev = new StringBuilder( inputString );
	return new String( rev.reverse() );
    }
  
}
