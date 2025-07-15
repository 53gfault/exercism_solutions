import java.lang.IllegalArgumentException;

class Hamming {
    String left;
    String right;
    Hamming(String leftStrand, String rightStrand) {
        left = leftStrand;
	right = rightStrand;
    }

    int getHammingDistance() {
        if( left.equals( "" ) && right.equals( "" ) )
	    return 0;
	else if( left.equals( "" ) )
	    throw new IllegalArgumentException( "left strand must not be empty." );
	else if( right.equals( "" ) )
	    throw new IllegalArgumentException( "right strand must not be empty." );
	if( left.length() != right.length() )
	    throw new IllegalArgumentException( "leftStrand and rightStrand must be of equal length." );
	int count = 0;
	for( int i = 0; i < left.length(); i++ )
            if( left.charAt( i ) != right.charAt( i ) )
	        count++;
	return count;
    }
}
