#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
	printf("nhap so thang trong nam:");
	int T;
	scanf("%d",&T);
	printf("nhap so ngay trong thang:");
	int N;
	scanf("%d",&N);
	printf("---------------------------------\n");
	printf("KET QUA\n");
	int Ng;
	int Th;
	if(T<=0)
	{
		printf("So thang nhap vao khong hop le");
	}else{
		if(T==1){
			if(0<N && N<32){
				Ng=N;
				printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
				Th=(Ng%7)+1;
				if(Th==1){
					printf("trong tuan, ngay nhap vao la ngay Chu nhat");
				}else{
					printf("trong tuan, ngay nhap vao la ngay thu: %d",Th);
				}
				
			}else{
				printf("So ngay nhap vao khong hop le");
			}
		}else{
			if(T==2){
				if(0<N && N<29){
				Ng=(N+31);
				printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
				int Th=(Ng%7)+1;
				if(Th==1){
					printf("trong tuan, ngay nhap vao la ngay Chu nhat");
				}else{
					printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
				}
				
			}else{
				printf("So ngay nhap vao khong hop le");
			}
				
			}else{
				if(T==3){
					if(0<N && N<32){
					Ng=(N+59);
					printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
					int Th=(Ng%7)+1;
					if(Th==1){
						printf("trong tuan, ngay nhap vao la ngay Chu nhat");
					}else{
						printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
					}
					}else{
						printf("So ngay nhap vao khong hop le");
				}
			}
				else{
					if(T==4){
						if(0<N && N<31){
						Ng=(N+90);
						printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
						int Th=(Ng%7)+1;
						if(Th==1){
							printf("trong tuan, ngay nhap vao la ngay Chu nhat");
						}else{
							printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
						}
					}else{
						printf("So ngay nhap vao khong hop le");
				}
					}else{
						if(T==5){
							if(0<N && N<32){
						Ng=(N+120);
						printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
						int Th=(Ng%7)+1;
						if(Th==1){
							printf("trong tuan, ngay nhap vao la ngay Chu nhat");
						}else{
							printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
						}
					}else{
						printf("So ngay nhap vao khong hop le");
				}
						}else{
							if(T==6){
								if(0<N && N<31){
									Ng=(N+151);
									printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
									int Th=(Ng%7)+1;
									if(Th==1){
										printf("trong tuan, ngay nhap vao la ngay Chu nhat");
									}else{
										printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
									}
								}else{
									printf("So ngay nhap vao khong hop le");
								}
							}else{
								if(T==7){
									if(0<N && N<32){
										Ng=(N+181);
										printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
										int Th=(Ng%7)+1;
										if(Th==1){
											printf("trong tuan, ngay nhap vao la ngay Chu nhat");
										}else{
											printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
										}
									}else{
										printf("So ngay nhap vao khong hop le");
									}
								}else{
									if(T==8){
										if(0<N && N<32){
											Ng=(N+212);
											printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
											int Th=(Ng%7)+1;
											if(Th==1){
												printf("trong tuan, ngay nhap vao la ngay Chu nhat");
											}else{
												printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
											}
										}else{
											printf("So ngay nhap vao khong hop le");
										}
									}else{
										if(T==9){
											if(0<N && N<31){
												Ng=(N+243);
												printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
												int Th=(Ng%7)+1;
												if(Th==1){
													printf("trong tuan, ngay nhap vao la ngay Chu nhat");
												}else{
													printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
												}
											}else{
												printf("So ngay nhap vao khong hop le");
											}
										}else{
											if(T==10){
												if(0<N && N<32){
													Ng=(N+273);
													printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
													int Th=(Ng%7)+1;
													if(Th==1){
														printf("trong tuan, ngay nhap vao la ngay Chu nhat");
													}else{
														printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
													}
												}else{
													printf("So ngay nhap vao khong hop le");
												}
											}else{
												if(T==11){
													if(0<N && N<31){
														Ng=(N+304);
														printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
														int Th=(Ng%7)+1;
														if(Th==1){
															printf("trong tuan, ngay nhap vao la ngay Chu nhat");
														}else{
															printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
														}
													}else{
														printf("So ngay nhap vao khong hop le");
													}
												}else{
													if(T==12){
														if(0<N && N<32){
															Ng=(N+334);
															printf("trong nam, ngay nhap vao la ngay thu: %d\n",Ng);
															int Th=(Ng%7)+1;
															if(Th==1){
																printf("trong tuan, ngay nhap vao la ngay Chu nhat");
															}else{
																printf("trong tuan,  ngay nhap vao la ngay thu: %d",Th);
															}
														}else{
															printf("So ngay nhap vao khong hop le");
														}
													}else{
														printf("So thang nhap vao khong hop le");
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<"\nChuong trinh da chay xong"<<endl;
	return  0;
}
