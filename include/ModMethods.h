#ifndef MOD_METHODS
#define MOD_METHODS

#include "wrappers/CurlWrapper.h"
#include "wrappers/MinizipWrapper.h"
#include "data_containers/Mod.h"
#include "Globals.h"
#include "Filter.h"
#include "handlers/ModHandler.h"
#include "handlers/ModfileHandler.h"

namespace modworks
{
  void MODWORKS_DLL getMods(Filter* filter, function< void(int, vector<Mod*>) > callback);

  void MODWORKS_DLL addMod(ModHandler* add_mod_handler, function<void(int, Mod*)> callback);
  void MODWORKS_DLL editMod(Mod* mod, ModHandler* add_mod_handler, function<void(int, Mod*)> callback);
  void MODWORKS_DLL deleteMod(Mod* mod, function<void(int, Mod*)> callback);

  void MODWORKS_DLL addModfile(Mod* mod, ModfileHandler* add_mod_file_handler, function<void(int, Mod*)> callback);

  void MODWORKS_DLL downloadModLogoThumbnail(Mod *mod, function< void(int, Mod*, string) > callback);
  void MODWORKS_DLL downloadModLogoFull(Mod *mod, function< void(int, Mod*, string) > callback);
  void MODWORKS_DLL downloadModMediaImagesThumbnail(Mod *mod, function< void(int, Mod*, vector<string>) > callback);
  void MODWORKS_DLL downloadModMediaImagesFull(Mod *mod, function< void(int, Mod*, vector<string>) > callback);
  void MODWORKS_DLL installMod(Mod *mod, string destination_path, function< void(int, Mod*, string) > callback);
}

#endif
