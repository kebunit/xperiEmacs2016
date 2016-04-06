package com.company.baru;

/*import java.util.Random;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;
import java.util.Iterator;
import java.util.Map; */
import java.util.*;


public class Main {
	public static void main(String[] args) {
		int num = -1;
		Random random = new Random();
		while (num < 0)
		{
			System.out.print("Insert number : ");
			Scanner in = new Scanner(System.in);
			num = in.nextInt();
		}
		LinkedList pos = new LinkedList();
		for (int i = 1; i<= num*num;i++){
			pos.add(i);
		}
		//System.out.println(pos);
		Collections.shuffle(pos);
		//int tes = (int) pos.get(0);
		//System.out.println(pos);
		int jumlahSinga = random.nextInt((num%6 + 2) + 1);
		int jumlahSerigala = random.nextInt((num%6 + 2) + 1);
		int jumlahKuda = random.nextInt((num%6 + 2) + 1);
		int jumlahJerapah = random.nextInt((num%6 + 2) + 1);
		int jumlahWortel = random.nextInt((num%6 + 2) + 1);
		int jumlahRumput = random.nextInt((num%6 + 2) + 1);
		Makhluk dummy = new Singa(0,0,0,-1);

		Makhluk[] lion = new Singa[jumlahSinga];
		int x;
		for (int count = 0; count<jumlahSinga; count++){
			System.out.println("lion no "+count);
			lion[count] = new Singa((int) pos.getFirst(),0,2,1);
			pos.removeFirst();
		}

		Makhluk[] wolf = new Serigala[jumlahSerigala];
		for (int count = 0; count<jumlahSerigala; count++){
			System.out.println("wolf no "+count);
			wolf[count] = new Serigala((int) pos.getFirst(),0,2,1);
			pos.removeFirst();
		}

		Makhluk[] horse = new Kuda[jumlahKuda];
		for (int count = 0; count<jumlahKuda; count++){
			System.out.println("horse no "+count);
			horse[count] = new Kuda((int) pos.getFirst(),0,2,1);
			pos.removeFirst();
		}

		Makhluk[] giraffe = new Jerapah[jumlahJerapah];
		for (int count = 0; count<jumlahJerapah; count++){
			System.out.println("Giraffe no "+count);
			giraffe[count] = new Jerapah((int) pos.getFirst(),0,2,1);
			pos.removeFirst();
		}

		Makhluk[] grass = new Rumput[jumlahRumput];
		for (int count = 0; count<jumlahRumput; count++){
			System.out.println("Grass no "+count);
			grass[count] = new Rumput((int) pos.getFirst(),0,1);
			pos.removeFirst();
		}

		Makhluk[] carrot = new Wortel[jumlahWortel];
		for (int count = 0; count<jumlahWortel; count++){
			System.out.println("Carrot no "+count);
			carrot[count] = new Wortel((int) pos.getFirst(),0,1);
			pos.removeFirst();
		}

		HashMap<Integer, Makhluk> hm = new HashMap<Integer, Makhluk>();

		for (int i = 0; i<num*num; i++){
			hm.put(i,dummy);
		}

		for (int i = 0; i<jumlahSinga; i++){
			hm.put(lion[i].GetPosisiX(),lion[i]);
		}

		for (int i = 0; i<jumlahSerigala; i++){
			hm.put(wolf[i].GetPosisiX(),wolf[i]);
		}

		for (int i = 0; i<jumlahKuda; i++){
			hm.put(horse[i].GetPosisiX(),horse[i]);
		}

		for (int i = 0; i<jumlahJerapah; i++){
			hm.put(giraffe[i].GetPosisiX(),giraffe[i]);
		}

		for (int i = 0; i<jumlahRumput; i++){
			hm.put(grass[i].GetPosisiX(),grass[i]);
		}

		for (int i = 0; i<jumlahWortel; i++){
			hm.put(carrot[i].GetPosisiX(),carrot[i]);
		}

		for (int j=0;j<num;j++){
			for (int k =0;k<num;k++){
				if (hm.get(k).GetId() == -1){
					System.out.print('*');
				}
				else if (hm.get(k).GetId()!= -1 && hm.get(k).GetPower()==10){
					System.out.print('S');
				}
				else if(hm.get(k).GetPower()==9){
					System.out.print('s');
				}
				else if(hm.get(k).GetPower()==8){
					System.out.print('J');
				}
				else if(hm.get(k).GetPower()==7){
					System.out.print('K');
				}
				else if (hm.get(k).GetPower()==6){
					System.out.print('R');
				}
				else if (hm.get(k).GetPower()==5){
					System.out.print('W');
				}
			}
			System.out.println();
		}
		System.out.println("baru");

		for (int time=0;time<10;time++){
			try {
				for (int k =0;k<num*num;k++){
					if (hm.get(k).GetId() == -1){
						System.out.print('*');
					}
					else if (hm.get(k).GetId()!= -1 && hm.get(k).GetPower()==10){
						System.out.print('S');
						((Singa)hm.get(k)).move(num);
						hm.put(hm.get(k).GetPosisiX(),hm.get(k));
						hm.put(k,dummy);
					}
					else if(hm.get(k).GetPower()==9){
						System.out.print('s');
						((Serigala)hm.get(k)).move(num);
						hm.put(hm.get(k).GetPosisiX(),hm.get(k));
						hm.put(k,dummy);
					}
					else if(hm.get(k).GetPower()==8){
						System.out.print('J');
						((Jerapah)hm.get(k)).move(num);
						hm.put(hm.get(k).GetPosisiX(),hm.get(k));
						hm.put(k,dummy);
					}
					else if(hm.get(k).GetPower()==7){
						System.out.print('K');
						//hm.get(k).move
						((Kuda)hm.get(k)).move(num);
						hm.put(hm.get(k).GetPosisiX(),hm.get(k));
						hm.put(k,dummy);
					}
					else if (hm.get(k).GetPower()==6){
						System.out.print('R');
					}
					else if (hm.get(k).GetPower()==5){
						System.out.print('W');
					}
				}
				System.out.println();
				Thread.sleep(1000);
			} catch(InterruptedException ex) {
				Thread.currentThread().interrupt();
			}
		}

		/*for (int time=0;time<10;time++){
			try {
				for (int k =0;k<num*num;k++){
					/*if (hm.get(k).GetId() == -1){
						System.out.print('*');
					}
					if (hm.get(k).GetId()!= -1 && hm.get(k).GetPower()==10) {
						System.out.println("Singa Posisi : "+k );
						((Singa) hm.get(k)).move(num);
						hm.put(hm.get(k).GetPosisiX(), hm.get(k));
						System.out.println("Singa Posisi setelah move : "+hm.get(k).GetPosisiX());
						hm.put(hm.get(k).GetPosisiX(), hm.get(k));
						hm.put(k,dummy);
					}

				}
				System.out.println();
				Thread.sleep(1000);
			} catch(InterruptedException ex) {
				Thread.currentThread().interrupt();
			}
		}*/


	}
}

