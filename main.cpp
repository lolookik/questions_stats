#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int ret;
    long int question_number = 16777215;//4294967295;

    //destination
    fstream fichier;
    fichier.open("questions.txt", std::fstream::out);

    srand (time(NULL));//rand seed
    int question_type;// = rand() % 108 + 1;
    //question_type = 17; //test


    //groupes
    // vector<int> groupe1, groupe2, groupe3;
    int groupe1_size, groupe2_size, groupe3_size, nb_groupes;
    for(long int j_iter = 1; j_iter<question_number; j_iter++)
    {
        question_type = rand() % 108 + 1;
        if(question_type>0 && question_type<24)   // HILBERT
        {
            if(j_iter<2000000 || (rand()%1000+1)>1)
                question_type = rand() % 108 + 25;
            else
            {

            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            switch (question_type) {
            case 1:
                fichier << "Доказать мощность континуума: можно найти биективную форму" << endl;
                fichier << "для сопоставления каждого подмножества действительных чисел" << endl;
                fichier << "со совокупностью действительных чисел." << endl;
                break;
            case 2:
                fichier << "Доказать непротиворечивость арифметических аксиом. " << endl;
                break;
            case 3:
                fichier << "Пусть будут два многогранника одинакового объема." << endl;
                fichier << "Можно ли разрезать первый на маленькие многогранники" << endl;
                fichier << "и из них собрать второй? Доказать." << endl;
                break;
            case 4:
                fichier << "Определить все геометрии, при которых прямая" << endl;
                fichier << "является кратчайшем соединении двух точек." << endl;
                break;
            case 5:
                fichier << "Доказать дифференцируемость функций, определяющих непрерывные " << endl;
                fichier << "группы преобразований Ли." << endl;
                break;
            case 6:
                fichier << "Составить математическое изложение аксиом физики." << endl;
                break;
            case 7:
                fichier << "Доказать трпнсцендентность чисел формы \"a в степени b\", " << endl;
                fichier << "где b - иррациональное число." << endl;
                break;
            case 8:
                fichier << "Доказать гипотезу Римана, решить проблему Гольдбаха " << endl;
                fichier << "и проблему простых чисел-близнец." << endl;
                break;
            case 9:
                fichier << "Доказать наиболее общий закон взаимности в любом числовом поле." << endl;
                break;
            case 10:
                fichier << "Определить разрешимость Диофантова уравнения." << endl;
                break;
            case 11:
                fichier << "Являются квадратичные формы с произвольными алгебраическими числовыми " << endl;
                fichier << "коэфициентами членом алгебраического поля чисел?" << endl;
                break;
            case 12:
                fichier << "Распространение теоремы Кронекера об Абелевых полях на " << endl;
                fichier << "произвольную алгебраическую область рациональности." << endl;
                break;
            case 13:
                fichier << "Доказать невозможность решения общего уравнения седьмой степени " << endl;
                fichier << "с помощью функции двух переменных." << endl;
                break;
            case 14:
                fichier << "Доказать конечность полных систем функций." << endl;
                break;
            case 15:
                fichier << "Составить строгое обоснование исчислительной геометрии Шуберта." << endl;
                break;
            case 16:
                fichier << "Описать топологию алгебраических кривых и поверхностей и " << endl;
                fichier << "предельные циклы двухмерного векторного поля." << endl;
                break;
            case 17:
                fichier << "Доказать, что определенную форму можно представить " << endl;
                fichier << "в виде суммы квадратов двух определенных форм" << endl;
                break;
            case 18:
                fichier << "Определить наиболее плотную упаковку шариков в общем n-мерном случае" << endl;
                break;
            case 19:
                fichier << "Являются ли решения регулярной вариационной задачи " << endl;
                fichier << "необходимо аналитическими?" << endl;
                break;
            case 20:
                fichier << "Доказать решимость всех вариационных задач." << endl;
                break;
            case 21:
                fichier << "Доказать существование линейных дифференциальных уравнений " << endl;
                fichier << "с заданной группой монодромии." << endl;
                break;
            case 22:
                fichier << "Провести униформизацию аналитических зависимостей " << endl;
                fichier << "с помощью автоморфных функций." << endl;
                break;
            case 23:
                fichier << "Разработать общий метод для решения всех вариационных задач." << endl;
                break;

            }
            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
            }
        }

        if(question_type>23 && question_type<36)  // NORMAL
        {
            //taille des groupes
            nb_groupes = rand() % 5+1;
            groupe1_size = rand() %7+10;
            groupe2_size = rand() %7+10;
            groupe3_size = rand() %7+10;

            //ecrire question
            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            fichier << "Определить имеются ли различия между совокупностями, " << endl;
            fichier << "имеющими нормальное распределение" << endl;
            fichier << endl;
            fichier << "Группа №1 | ";
            for(int iter = 0; iter<groupe1_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            fichier << "Группа №2 | ";
            for(int iter = 0; iter<groupe2_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            if(nb_groupes>2)
            {
                fichier << "Группа №3 | ";
                for(int iter = 0; iter<groupe3_size; iter++)
                {
                    ret = rand() %100+1;
                    if(ret<10)
                        fichier << " " << ret << " | ";
                    else
                        fichier << ret << " | ";

                }
                fichier << endl;
            }

            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
        }

        if(question_type>35 && question_type<48)  // [void]
        {//taille des groupes
            nb_groupes = rand() % 5+1;
            groupe1_size = rand() %7+10;
            groupe2_size = rand() %7+10;
            groupe3_size = rand() %7+10;

            //ecrire question
            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            fichier << "Определить имеются ли различия между совокупностями, " << endl;
            fichier << endl;
            fichier << endl;
            fichier << "Группа №1 | ";
            for(int iter = 0; iter<groupe1_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            fichier << "Группа №2 | ";
            for(int iter = 0; iter<groupe2_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            if(nb_groupes>2)
            {
                fichier << "Группа №3 | ";
                for(int iter = 0; iter<groupe3_size; iter++)
                {
                    ret = rand() %100+1;
                    if(ret<10)
                        fichier << " " << ret << " | ";
                    else
                        fichier << ret << " | ";

                }
                fichier << endl;
            }

            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
        }

        if(question_type>47 && question_type<60)  // NON NORMAL
        {
            //taille des groupes
            nb_groupes = rand() % 5+1;
            groupe1_size = rand() %7+10;
            groupe2_size = rand() %7+10;
            groupe3_size = rand() %7+10;

            //ecrire question
            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            fichier << "Определить имеются ли различия между совокупностями, " << endl;
            fichier << "не имеющими нормальное распределение" << endl;
            fichier << endl;
            fichier << "Группа №1 | ";
            for(int iter = 0; iter<groupe1_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            fichier << "Группа №2 | ";
            for(int iter = 0; iter<groupe2_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            if(nb_groupes>2)
            {
                fichier << "Группа №3 | ";
                for(int iter = 0; iter<groupe3_size; iter++)
                {
                    ret = rand() %100+1;
                    if(ret<10)
                        fichier << " " << ret << " | ";
                    else
                        fichier << ret << " | ";

                }
                fichier << endl;
            }

            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
        }


        if(question_type>59 && question_type<72)  // REP NORMAL
        {
            //taille des groupes
            nb_groupes = rand() % 5+1;
            groupe1_size = rand() %7+10;
            groupe2_size = rand() %7+10;
            groupe3_size = rand() %7+10;

            //ecrire question
            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            fichier << "Определить имеются ли различия между повторными измерениями, " << endl;
            fichier << "если выборки прошли проверку на нормальность" << endl;
            fichier << endl;
            fichier << "Группа №1 | ";
            for(int iter = 0; iter<groupe1_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            fichier << "Группа №2 | ";
            for(int iter = 0; iter<groupe2_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            if(nb_groupes>2)
            {
                fichier << "Группа №3 | ";
                for(int iter = 0; iter<groupe3_size; iter++)
                {
                    ret = rand() %100+1;
                    if(ret<10)
                        fichier << " " << ret << " | ";
                    else
                        fichier << ret << " | ";

                }
                fichier << endl;
            }

            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
        }

        if(question_type>71 && question_type<84)  // REP [void]
        {
            //taille des groupes
            nb_groupes = rand() % 5+1;
            groupe1_size = rand() %7+10;
            groupe2_size = rand() %7+10;
            groupe3_size = rand() %7+10;

            //ecrire question
            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            fichier << "Определить имеются ли различия между повторными измерениями, " << endl;
            fichier <<  endl;
            fichier << endl;
            fichier << "Группа №1 | ";
            for(int iter = 0; iter<groupe1_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            fichier << "Группа №2 | ";
            for(int iter = 0; iter<groupe2_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            if(nb_groupes>2)
            {
                fichier << "Группа №3 | ";
                for(int iter = 0; iter<groupe3_size; iter++)
                {
                    ret = rand() %100+1;
                    if(ret<10)
                        fichier << " " << ret << " | ";
                    else
                        fichier << ret << " | ";

                }
                fichier << endl;
            }

            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
        }

        if(question_type>83 && question_type<96)  // REP NON NORMAL
        {
            //taille des groupes
            nb_groupes = rand() % 5+1;
            groupe1_size = rand() %7+10;
            groupe2_size = rand() %7+10;
            groupe3_size = rand() %7+10;

            //ecrire question
            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            fichier << "Определить имеются ли различия между повторными измерениями, " << endl;
            fichier << "если выборки отрицательно прошли проверку на нормальность" << endl;
            fichier << endl;
            fichier << "Группа №1 | ";
            for(int iter = 0; iter<groupe1_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            fichier << "Группа №2 | ";
            for(int iter = 0; iter<groupe2_size; iter++)
            {
                ret = rand() %100+1;
                if(ret<10)
                    fichier << " " << ret << " | ";
                else
                    fichier << ret << " | ";

            }
            fichier << endl;

            if(nb_groupes>2)
            {
                fichier << "Группа №3 | ";
                for(int iter = 0; iter<groupe3_size; iter++)
                {
                    ret = rand() %100+1;
                    if(ret<10)
                        fichier << " " << ret << " | ";
                    else
                        fichier << ret << " | ";

                }
                fichier << endl;
            }

            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
        }

        if(question_type>95)  // QUAL
        {
            //taille des groupes
            nb_groupes = rand() % 5+1;
            groupe1_size = rand() %7+10;
            groupe2_size = rand() %7+10;
            groupe3_size = rand() %7+10;

            //ecrire question
            fichier << "--------------------------------------------------------------------------------" << endl;
            fichier << "Задача №" << j_iter+rand() % 4294967295 + 1 << endl;
            fichier << "Определить имеются ли различия между группами по качественному признаку" << endl;
            fichier << "по качественному признаку" << endl;
            fichier << endl;
            fichier << "Группа №1 | ";
            for(int iter = 0; iter<groupe1_size; iter++)
            {
                ret = rand() %100+1;
                if(ret%2)
                    fichier << "+" << " | ";
                else
                    fichier << "-" << " | ";

            }
            fichier << endl;

            fichier << "Группа №2 | ";
            for(int iter = 0; iter<groupe2_size; iter++)
            {
                ret = rand() %100+1;
                if(ret%2)
                    fichier << "+" << " | ";
                else
                    fichier << "-" << " | ";

            }
            fichier << endl;

            if(nb_groupes>2)
            {
                fichier << "Группа №3 | ";
                for(int iter = 0; iter<groupe3_size; iter++)
                {
                    ret = rand() %100+1;
                    if(ret%2)
                        fichier << "+" << " | ";
                    else
                        fichier << "-" << " | ";
                }
                fichier << endl;
            }

            fichier << endl;
            fichier << "--------------------------------------------------------------------------------" << endl;
        }
        fichier << endl;
        fichier << endl;
    }

    /*//tests
        cout << "Hello World!" << endl;
    cout << sizeof(long) << endl; //assez?
    cout << "Hello World!" << endl;
    fichier << "кириллийцы" << endl;*/

    fichier.close();
    return 0;
}

