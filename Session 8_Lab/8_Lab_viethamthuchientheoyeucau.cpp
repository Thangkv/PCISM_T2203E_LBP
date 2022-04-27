int tinhTongchuso(int n){
	int m=0;
	while (n>0){
	m=m+(n%10);
	n=n/10;
	}
	return m;
}
int uocChungLonNhat(int a,int b){

	for ( int i=a;i>0;i--){
		if(a%i==0&&b%i==0){
			printf("uoc chung lon nhat la %d\n",i);
			break;
		}
	}
}
int boiChungNhoNhat(int a,int b){
	for(int j=1;j<=a*b;j++){
		int S=a*j;
		if(S%b==0){
		printf("boi chung nho nhat la: %d",S);
		break;
		}
	}
}
int tinhDienTich(int a,int b,int c){
	float dt;
	bool f=false;
	if((a+b)>c){
		if((a+c)>b){
			if((b+c)>a){
				float p;
				p=(a+b+c)/2;
				dt=sqrt(p*(p-a)*(p-b)*(p-c));
				f=true;
			}
		}
	}
	if(f){
		printf("dien tich tam giac la: %f\n",dt);	
	}else{
		printf("%d,%d,%d khong phai 3 canh cua tam giac\n",a,b,c);	
	}
}
int tinhChuVi(int a,int b,int c){
	int chuvi;
	bool f=false;
	if((a+b)>c){
		if((a+c)>b){
			if((b+c)>a){
				chuvi=a+b+c;
				f=true;
			}
		}
	}
	if(f){
		printf("chu vi tam giac la: %d\n",chuvi);	
	}else{
		printf("%d,%d,%d khong phai 3 canh cua tam giac\n",a,b,c);	
	}
}
