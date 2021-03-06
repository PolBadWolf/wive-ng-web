#ifndef _INCLUDE_APFORM_H
#define _INCLUDE_APFORM_H

extern int executeCommand(int eid, webs_t wp, int argc, char_t **argv);
extern void formSaveConfig(webs_t wp, char_t *path, char_t *query);
extern void formCommands(webs_t wp, char_t *path, char_t *query);

typedef enum { BOOT_SETTING=1, CURRENT_SETTING=2} CONFIG_DATA_T;

#endif
