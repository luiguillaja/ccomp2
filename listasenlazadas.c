#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
};

struct node *crear_lista(struct node *x,int n)
{
    struct node *prev;
    int i;
    x->val=1;
    prev=malloc(sizeof(struct node));
    prev=x;
    for(i=2;i<=n;i++)
        {

            struct node *cur;
            cur=malloc(sizeof(struct node));
            cur->val=i;
            prev->next=cur;
            prev=cur;
        }
    prev->next=NULL;
    return x;
}

void imprimir_lista(struct node *x)
{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp=x;
    while(temp!=NULL)
          {
              printf("%i  ",temp->val);
              temp=temp->next;
          }
}
struct node *borrar_nodo(struct node *x,int key)
{
  struct node *prev,*cur,*temp;
  cur=malloc(sizeof(struct node));
  prev=malloc(sizeof(struct node));
temp=malloc(sizeof(struct node));
  cur=x->next;
  prev=x;
  if(x->val==key)
  {
    temp=x;
    x=x->next;
    free(temp);
    return x;
    }
  else{

  while(cur!=NULL)
  {
      if(cur->val==key)
      {
        prev->next=cur->next;
        free(cur);
        return x;
      }
      cur=cur->next;
      prev=prev->next;
  }
 }
}
int len_lista(struct node *x)
{
    struct node *auxi;
    int contador=0;
    auxi=malloc(sizeof(struct node));
    auxi=x;
    while(auxi->next!=NULL){
    contador++;
    auxi=auxi->next;
    }
    return contador;

}
struct node *insertar_nodo(struct node *x,int posicion,int nodo)
{
    struct node *cur,*node_inserted,*prev,*temp;
    int i=0,len_x=len_lista(x);
    cur=malloc(sizeof(struct node));
    node_inserted=malloc(sizeof(struct node));
    temp=malloc(sizeof(struct node));
    node_inserted->val=nodo;
    cur=x->next;

    if(posicion==0)
    {
        node_inserted->next=x;
        x=node_inserted;
        return x;

    }
    if(posicion==len_x)
    {
        prev=x;
        while(cur->next!=NULL){
            cur=cur->next;
             prev=prev->next;
        }
        prev->next=node_inserted;
        node_inserted->next=cur;
        return x;


    }
    else{
    while(cur!=NULL)
    {

        if(i==posicion)
        {
            temp=prev->next;
            prev->next=node_inserted;
            node_inserted->next=temp;
            temp->next=cur;
            return x;
        }
        i++;
        if(i==1)
            prev=x;
        else
        {
            prev=prev->next;
        }
        cur=cur->next;
    }

}

}
struct node *concatenar(struct node *x,struct node *y)
{
    struct node *aux;
    aux=malloc(sizeof(struct node));
    aux=x;
    while(aux->next!=NULL)
    {
        aux=aux->next;
    }
    while(y!=NULL)
    {
        aux->next=y;
        y=y->next;
        aux=aux->next;
    }
    return x;
}
main()
{
    struct node *head1,*head2;
    head1=malloc(sizeof(struct node));
    head2=malloc(sizeof(struct node));
    crear_lista(head1,4);
    crear_lista(head2,5);
//    borrar_nodo(head1,1);
    insertar_nodo(head1,0,9);

//    imprimir_lista(head1);

//     imprimir_lista(head2);
//     printf("\n");
//     concatenar(head1,head2);
      imprimir_lista(head1);

}

