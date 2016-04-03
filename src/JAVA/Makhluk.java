public abstract class Makhluk {
	/* data member */
	protected int Power;
	protected int PosisiX;
	protected int PosisiY;
	protected int Usia;

	/* getter */
	public abstract int GetPosisiX();
	public abstract int GetPosisiY();
	public abstract int GetPower();
	public abstract int GetUsia();
	public abstract int GetId();

	/* setter */
	public abstract void SetPosisiX(int _PosisiX);
	public abstract void SetPosisiY(int _PosisiY);

	/* methods */
	public abstract void kill();
	public abstract void destruct();
}