import java.util.*;

class ResistorColor {
    
    HashMap< String, Integer > colors;
    ResistorColor() {
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

    int colorCode(String color) {
	return colors.get( color );
    }

    String[] colors() {
	String colors [] = new String[ this.colors.size() ];
	int count = 0;
	for( String color: this.colors.keySet() )
	    colors[ count++ ] = color;
	return colors;
    }
}
