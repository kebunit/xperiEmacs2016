public class Serigala extends Karnivor {
	/* data member */
	private int Id;

	/* constructor */
	public  Serigala() {
		Power=9;
		Usia=85;
		PosisiX = 2;
		PosisiY=2;
		ArahGerak = 2;
		Id = 1;

		System.out.println("Power :"+Power+" Usia : "+Usia+" Posisi :"+PosisiX+" PosisiY :"+PosisiY+" ArahGerak: "+ArahGerak+" Id: "+Id);
		System.out.println("ctor");
	}
	public Serigala(int _PosisiX,int _PosisiY, int _ArahGerak, int _Id){
		Power=9;
		Usia=85;
		PosisiX = _PosisiX;
		PosisiY = _PosisiY;
		ArahGerak = _ArahGerak;
		Id = _Id;

		System.out.println("Power :"+Power+" Usia : "+Usia+" Posisi :"+PosisiX+" PosisiY :"+PosisiY+" ArahGerak: "+ArahGerak+" Id: "+Id);
		System.out.println("ctor by parameter");
	}

	/* getter */
	public int GetId(){
		return Id;
	}
	public int GetUsia(){
		return Usia;
	}
	public int GetPosisiX(){
		return PosisiX;
	}
	public int GetPosisiY(){
		return PosisiY;
	}
	public int GetPower(){
		return Power;
	}
	public int GetArahGerak(){
		return ArahGerak;
	}

	/* setter */
	public void SetPosisiX(int _PosisiX){
		PosisiX = _PosisiX;
	}
	public void SetPosisiY(int _PosisiY){
		PosisiY = _PosisiY;
	}
	public void SetArahGerak(int _ArahGerak){
		ArahGerak=_ArahGerak;
	}
	public void SetUsia(int _usia){
		Usia = _usia;
	}
	
	/* methods */
	public void move() {
		switch(ArahGerak){
			case 1:
				PosisiX = PosisiX+1 ;
				break;
			case 2:
				PosisiX = PosisiX+2 ;
				break;
			case 3:
				PosisiX = PosisiX+3 ;
				break;
			case 4:
				PosisiX = PosisiX+4 ;
				break;
			case -1:
				PosisiX = PosisiX-1 ;
				break;
			case -2:
				PosisiX = PosisiX-2 ;
				break;
			case -3:
				PosisiX = PosisiX-3 ;
				break;
			case -4:
				PosisiX = PosisiX-4 ;
				break;
			//this_thread::sleep_for(chrono::milliseconds(2000));
		}
	}
	public void fight() {
		System.out.println("will implemented with Serigala class using thread");
	}
	public void grouping() {
		System.out.println("will implemented with thread later");
	}

	public void kill() {
		System.out.println("Dummy kill, will implement thread to invoke other Makhluk destruct()");
	}

	public void destruct() {
		//only implement death by age
		if (Usia == 0){
			// destructor Serigala
		}
	}

	/* unit test */
	/*
	public static void main(String[] args) {
		Makhluk Sr = new Serigala();
	}
	*/
}