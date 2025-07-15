class Darts {

    float distance;
	Darts(double x, double y) {
		distance = (float)Math.sqrt( Math.pow( x, 2 ) + Math.pow( y, 2 ) );
    }

    int score() {
		if( distance <= 1 )
			return 10;
		else if( distance <= 5 )
			return 5;
		else if( distance <= 10 )
			return 1;
		return 0;
    }

}
