#include <iostream>

// ��uconst�֐� = �R���X�g�����o�֐�
// �߂�l �֐���(����) const;
class Test
{
public:
	void SetValue(int value);
	int GetValue() const;

private:
	int Value;
};

void Test::SetValue(int value)
{
	Value = value;
}
// �R���X�g�����o�֐��̒�`(����)�����ɂ���uconst������
int Test::GetValue() const
{
	return Value;
}

int main()
{
	Test test;
	test.SetValue( 1000 );
	int ans = test.GetValue();

	// �f�[�^���擾�����������̎�
	// �|�C���^�ϐ��̃A�h���X�̐�ɕύX�������Ȃ����Ƃ�ۏ؂��邽��
	// const �|�C���^�ϐ����g��������ʓI
	const Test* pTest = &test;
//	pTest->SetValue(10);	// �R���X�g�����o�֐��łȂ����߁A�g�p�ł��Ȃ�(�ύX����鋰�ꂠ��)
	pTest->GetValue();		// �R���X�g�����o�֐��Ȃ̂ŁA�g�p�ł���

}


