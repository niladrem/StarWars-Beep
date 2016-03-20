void B(string d, int o, int q){
    int D = pow(double(2), o-1);
	       if(d == "C"){
                D *= 32.7;
	            }
           else if(d == "C#"){
    	       D *= 34.6;
    	       }
           else if(d == "D"){
    	       D *= 36.7;
    	       }
           else if(d == "D#"){
    	       D *= 38.9;
    	       }
           else if(d == "E"){
    	       D *= 41.2;
    	       }
           else if(d == "F"){
    	       D *= 43.7;
    	       }
           else if(d == "F#"){
    	       D *= 46.3;
    	       }
           else if(d == "G"){
    	       D *= 49;
    	       }
           else if(d == "G#"){
    	       D *= 51.9;
    	       }
           else if(d == "A"){
    	       D *= 55;
    	       }
           else if(d == "A#"){
    	       D *= 58.3;
    	       }
           else if(d == "H"){
    	       D *= 61.7;
    	       }
           else{
               D = 0;    	
               }
	Beep(D, q);
}
