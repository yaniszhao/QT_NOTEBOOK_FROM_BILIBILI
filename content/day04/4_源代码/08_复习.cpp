��ͼ��
//�ڴ����л�ͼ����д��ͼ�¼����麯��
void paintEvent(QPaintEvent * event)
{
	QPainter p(this); //�������ң��ڴ����ϻ�ͼ
	p.drawXXX();
	
	p.drawPixmap(0, 0, width(), height(), QPixmap() );
	p.drawPixmap(x, 0, 80, 80 QPixmap() );
	p.drawImage();		//QImage
	p.drawPicture();	//QPicture
	p.drawLine();
	p.drawPixmap(); //QBitmap: �ڰף���꣬
}

x += 20;
if(x > width() )
{
	x = 0;
}

update(); //��ӵ���paintEvent()


��ͼ�豸
QPixmap:�����Ļ�����Ż��ˣ���ƽ̨��أ����ܶ�ͼƬ�����޸�
QImage����ƽ̨�޹أ����Զ�ͼƬ�����޸ģ����߳��л�ͼ
QPicture�������ͼ��״̬���������ļ���

QPixmap -> QImage
QPixmap a;
a.toImage();

QPixmap -> QImage
QImage b;
QPixmap::fromImage(b);

QPainter p;
QPicture pic;
p.begin(&pic); //ָ����ͼ�豸
//��ͼ����
p.end();
pic.save("demo.aa");

QPicture temp;
temp.load("demo.aa");

�����򴰿�
1�������ڻ�һ�ű���ͼ
2��ȥ���
3���趨���ԣ�����͸����
4���ƶ��������������Ļ����

�ļ�����
QFile file;
file.setFileName();
file.open();
file.write();
file.read();
file.close();

QFileInfo info;
info.size(); //�ļ���С
info.fileName(); //�ļ���

QDataStream: �����Ʒ�ʽ
QTextStream: �ı���ʽ���� ��ָ�����룩
QBuffer: �ڴ��ļ������ݷ����ڴ��У�


