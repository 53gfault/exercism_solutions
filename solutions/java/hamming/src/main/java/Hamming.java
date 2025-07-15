class Hamming {
    String left;
    String right;
    Hamming(String leftStrand, String rightStrand) {
        left = leftStrand;
	right = rightStrand;
    }

    int getHammingDistance() {
        if( left.length() != right.length() )
            return -1;
	int count = 0;
	for( int i = 0; i < left.length(); i++ )
            if( left.charAt( i ) != right.charAt( i ) )
	        count++;
	return count;
    }

}
