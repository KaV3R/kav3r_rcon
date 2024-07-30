#include <string>
#include "KeyValues.h"
#include <ctime>
#include "abstract.h"

#define CACHE_FILE "addons/configs/kav3r_rcon/cache.ini"
#define CONFIG_FILE "addons/configs/kav3r_rcon/config.ini"

extern IFileSystem *g_fileSystem;

class CFileManager
{
public:
    CFileManager()
    {
        Init();
    }

    void CleanCache();
    bool IsSteamIdCached(const char *steamid);
    void AddSteamIdToCache(const char *steamid);

    int GetCacheTime() { return g_cacheTime; }
    const char *GetRconPassword() { return g_szRconPassword; }

private:
    int g_cacheTime;
    const char *g_szRconPassword;
    void Init();
};

extern CFileManager *g_fileManager;