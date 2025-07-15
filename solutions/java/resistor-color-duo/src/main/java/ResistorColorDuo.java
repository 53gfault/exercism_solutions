import java.util.*;

class ResistorColorDuo {
    
    HashMap< String, Integer > colors;
    ResistorColorDuo() {
	colors = new LinkedHashMap<>();
    	colors.put( "black", 0 );
    	colors.put( "brown", 1 );
    	colors.put( "red", 2 );
    	colors.put( "orange", 3 );
    	colors.put( "yellow", 4 );
    	colors.put( "green", 5 );
    	colors.put( "blue", 6 );
    	colors.put( "violet", 7 );
    	colors.put( "grey", 8 );
    	colors.put( "white", 9 );
    }

    int value(String[] colors) {
	int val = 0;
	for( int i = 0; i < 2; i++ )
	    val = val * 10 + this.colors.get( colors[ i ] );
	return val;
    }
}
