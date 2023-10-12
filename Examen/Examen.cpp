#include <iostream>
#include <cstdlib>

using namespace std;

int ans, sn, cont;
void reinicio();
void heroes();
void villanos();
void hombre();
void mujer();
int main(){
    do{
        system("clear");
        cout << "-------------Adivina Quién---------------\n";
        cout << "|                                       |\n";
        cout << "|    1.-  Thor                          |\n";
        cout << "|    2.-  Capitan América               |\n";
        cout << "|    3.-  Batman                        |\n";
        cout << "|    4.-  Iron man                      |\n";
        cout << "|    5.-  Hulk                          |\n";
        cout << "|    6.-  Joker                         |\n";
        cout << "|    7.-  Superman                      |\n";
        cout << "|    8.-  Thanos                        |\n";
        cout << "|    9.-  Spiderman                     |\n";
        cout << "|    10.- Black Widow                   |\n";
        cout << "|    11.- Super Girl                    |\n";
        cout << "|    12.- Flash                         |\n";
        cout << "|    13.- Doctor Octopus                |\n";
        cout << "|    14.- Aquaman                       |\n";
        cout << "|                                       |\n";
        cout << "-----------------------------------------\n";
        cout << "Elige un personaje y lo adivinaré\n";
        cout << "Tu personaje es heroes o villano?\n";
        cout <<"1.- Heroe\n";
        cout <<"2.- Villano\n";
        cin >> ans;
        cout << "-----------------------------\n";
        switch(ans){
            case 1:
                heroes();
                break;
            case 2:
                villanos();
                break;
            default:
                cout<<"Esa opción no está disponible\n";
                system( "read -n 1 -s -p \"Presione cualquier tecla para continuar. .\"" );
                break;
        }
    }while(cont==1);
}

void reinicio(){
    cout<<"Quieres seguir jugando?\n";
    cout<<"1.- Si\n";
    cout<<"2.- No\n";
    cin>>cont;
}
void heroes(){
    cout<<"Tu personaje es hombre?\n";
    cout<<"1.- Si\n";
    cout<<"2.- No\n";
    cin>>sn;
    if(sn==1){
        hombre();
    }
    else if(sn==2){
        mujer();
    }
}
void villanos(){
    cout<<"Tu personaje es de DC?\n";
    cout<<"1.- Si\n";
    cout<<"2.- No\n";
    cin>>sn;
    if(sn==1){
        cout<<"Tu personaje es Joker\n";
        reinicio();
    }
    else if(sn==2){
        cout<<"Tu personaje es morado?\n";
        cin>>sn;
        if(sn==1){
            cout<<"Tu personaje es Thanos\n";
            reinicio();
        }
        else{
            cout<<"Tu personaje es Doctor Octopus\n";
            reinicio();
        }
    }
}
void hombre(){
    cout<<"Tu personaje usa capa?\n";
    cout<<"1.- Si\n";
    cout<<"2.- No\n";
    cin>>sn;
    if(sn==1){
        cout<<"Su capa es roja?\n";
        cout<<"1.- Si\n";
        cout<<"2.- No\n";
        cin>>sn;
        if(sn==2){
            cout<<"Tu personaje es Batman\n";
            reinicio();
        }else{
            cout<<"Utiliza un martillo?\n";
            cout<<"1.- Si\n";
            cout<<"2.- No\n";
            cin>>sn;
            if(sn==2){
                cout<<"Tu personaje es Superman\n";
                reinicio();
            }else{
                cout<<"Tu personaje es Thor\n";
                reinicio();
            }
        }
    }
    else{
        cout<<"Tu personaje es un vengador?\n";
        cout<<"1.- Si\n";
        cout<<"2.- No\n";
        cin>>sn;
        if (sn==1)
        {
            cout<<"Tu personaje usa mascara?\n";
            cout<<"1.- Si\n";
            cout<<"2.- No\n";
            cin>>sn;
            if (sn==1)
            {
                cout<<"Tu personaje utiliza un escudo?\n";
                cout<<"1.- Si\n";
                cout<<"2.- No\n";
                cin>>sn;
                if (sn==1)
                {
                    cout<<"Tu personaje es Capitán América\n";
                    reinicio();
                }
                else
                {
                    cout<<"Tu personaje es Spiderman\n";
                    reinicio();
                }
                
            }
            else
            {
                cout<<"Tu personaje usa casco?\n";
                cout<<"1.- Si\n";
                cout<<"2.- No\n";
                cin>>sn;
                if (sn==1)
                {
                    cout<<"Tu personaje es Iron Man\n";
                    reinicio();
                }
                else
                {
                    cout<<"Tu personaje es Hulk\n";
                    reinicio();
                }   
            }
        }else{
            cout<<"Tu personaje tiene supervelocidad?\n";
            cout<<"1.- Si\n";
            cout<<"2.- No\n";
            cin>>sn;
            if (sn==1)
            {
                cout<<"Tu personaje es Flash\n";
                reinicio();
            }
            else
            {
                cout<<"Tu personaje es Aquaman\n";
                reinicio();
            }
        }
        
    }
}
void mujer(){
    cout<<"Tu personaje es de Marvel?\n";
    cout<<"1.- Si\n";
    cout<<"2.- No\n";
    cin>>sn;
    if(sn==1){
        cout<<"Tu personaje es Black Widow\n";
        reinicio();
    }
    else{
        cout<<"Tu personaje es Super Girl\n";
        reinicio();
    }
}
