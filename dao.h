#ifndef __DAO_H__
#define __DAO_H__

typedef struct {
  int memberid;
  char username[50];
  char password[32];
  char address1[128];
  char address2[128];
  char email1[80];
  char email2[80];
  char city[30];
  char pin[30];
  char profession[60];
  int ipaddr;
  char phone1[30];
} member_info;

typedef struct {
  int memberid;
  int friendid;
} friend_info;

void dao_init();
void dao_deinit();

int dao_add_member(member_info *member);
int dao_add_friend(friend_info *friend);


#endif