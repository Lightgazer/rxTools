// Translations and corrections by: nastys, Crusard, Pikawil, DjoeN, VinsCool, R4ndom, guitarheroknight, Asia81.
static int N_LANG=7;

static wchar_t* STR_LANGUAGES[]={L"Eng", L"Ita", L"Esp", L"Fra", L"Nld", L"Nor", L"Hrv", L"Rus"};
static wchar_t* STR_FORCE_UI_BOOT[]={L"Force UI boot:         %ls", L"Forza avvio UI:        %ls", L"Iniciar en UI:         %ls", L"Forcer demarrage UI    %ls", L"Start in UI:           %ls", L"Tving oppstart av UI   %ls", L"Forsiraj ulazak u UI   %ls", L"Загружать UI:          %ls"};
static wchar_t* STR_SELECTED_THEME[]={L"Selected theme:     <%3c  >", L"Tema selezionato:   <%3c  >", L"Tema seleccionado:  <%3c  >", L"Theme choisi :      <%3c  >", L"Selecteer thema:    <%3c  >", L"Valgt tema:         <%3c  >", L"Izabrana tema:      <%3c  >", L"Выбранная тема:     <%3c  >"};
static wchar_t* STR_SHOW_AGB[]={L"Show AGB_FIRM BIOS:    %ls", L"Mostra BIOS AGB_FIRM   %ls", L"Ver AGB_FIRM BIOS:     %ls", L"Activer AGB_FIRM :     %ls", L"Toon AGB_FIRM BIOS:    %ls", L"Vis AGB_FIRM BIOS:     %ls", L"Prikazi AGB_FIRM:      %ls", L"Показывать AGB_FIRM    %ls"};
static wchar_t* STR_ENABLE_3D_UI[]={L"Enable 3D UI:          %ls", L"Attiva UI 3D:          %ls", L"Habilitar 3D UI:       %ls", L"Activer UI 3D :        %ls", L"Gebruik 3D UI:         %ls", L"Aktiver UI i 3D:       %ls", L"Ukljuci 3D UI:         %ls", L"Включить 3D UI:        %ls"};
static wchar_t* STR_QUICK_BOOT[]={L"Quick boot:            %ls", L"Avvio rapido:          %ls", L"Inicio rapido:         %ls", L"Demarrage rapide :     %ls", L"Snel starten:          %ls", L"Rask oppstart:         %ls", L"Brzo Paljenje:         %ls", L"Быстрая загрузка:      %ls"};
static wchar_t* STR_CONSOLE_LANGUAGE[]={L"Language:           < %-4ls>", L"Lingua:             < %-4ls>", L"Lenguaje:           < %-4ls>", L"Langage :           < %-4ls>", L"Taal:               < %-4ls>", L"Sprak:              < %-4ls>", L"Jezik:              < %-4ls>", L"Язык:               < %-4ls>"};

//static wchar_t* STR_YES[]={L"Yes", L"Si", L"Si", L"Oui", L"Ja", L"Ja", L"Da", L"Да"};
//static wchar_t* STR_NO[]={L"No", L"No", L"No", L"Non", L"Nee", L"Nei", L"Ne", L"Нет"};
//static wchar_t* STR_SETTINGS[]={L"           SETTINGS", L"          IMPOSTAZIONI", L"            AJUSTES", L"            OPTIONS", L"          INSTELLINGEN", L"         INNSTILLINGER", L"           Postavke", L"           НАСТРОЙКИ"};
static wchar_t* STR_AUTOBOOT[]={L"AUTOBOOT", L"AVVIO AUTOMATICO", L"INICIO AUTOMATICO", L"DEMARRAGE AUTOMATIQUE", L"AUTOSTART", L"AUTOMATISK OPPSTART", L"Automatsko pokretanje", L"АВТОЗАГРУЗКА"};
static wchar_t* STR_HOLD_R[]={L"Hold R to go to the menu", L"Tieni premuto R per andare al menu", L"Manten pulsado R para ir al menu", L"Maintenir le bouton R pour acceder au menu", L"R ingedrukt houden voor menu", L"Hold R for a ga til menyen", L"Pridrzite tipku R da bi ste usli u meni", L"Удерживайте R для перехода в меню"};
//static wchar_t* STR_MISSING_THEME_FILES={L" MISSING THEME FILES!   ", L" FILE DEL TEMA MANCANTI!   ", L" NO SE ENCUENTRAN LOS ARCHIVOS DEL TEMA!   ", L" FICHIERS DE THEME MANQUANTS !   ", L" THEMA BESTANDEN ONTBREKEN!   ", L" MANGLER TEMAFILER!   ", L" NEDOSTAJU DATOTEKE TEME!   ", L" ОТСУТСТВУЮТ ФАЙЛЫ ТЕМЫ!   "};
//static wchar_t* STR_CHOOSE_NAND={L"Choose the NAND you want to use", L"Seleziona la NAND da usare", L"Selecciona una NAND para usar:", L"Choissisez la NAND que vous voulez utiliser :", L"Kies een NAND voor gebruik:", L"Velg hvilken NAND du vil bruke:", L"Izaberi NAND datoteku koju zelite koristiti:", L"Выберите NAND, который хотите использовать"};
//static wchar_t* STR_PRESS_X_SYSNAND={L"Press Ⓧ: sysNAND\n", L"Premi Ⓧ: sysNAND\n", L"Pulsa Ⓧ: sysNAND\n", L"Bouton X : sysNAND\n", L"Druk Ⓧ: sysNAND\n", L"Trykk Ⓧ: sysNAND\n", L"Stisni Ⓧ: sysNAND\n", L"Нажмите Ⓧ: sysNAND\n"};
//static wchar_t* STR_PRESS_Y_EMUNAND={L"Press Ⓨ: emuNAND\n", "Press Ⓨ: emuNAND\n", L"Pulsa Ⓨ: emuNAND\n", L"Bouton Y : emuNAND\n", L"Druk Ⓨ: emuNAND\n", L"Trykk Ⓨ: emuNAND\n", L"Stisni Ⓨ: emuNAND\n", L"Нажмите Ⓨ: emuNAND\n"};
//static wchar_t* STR_PRESS_B_BACK={L"Press Ⓑ: Back\n", L"Premi Ⓑ: Indietro", L"Pulsa Ⓑ: Volver al menu", L"Bouton B : Retour\n", L"Druk Ⓑ: Terug naar menu\n", L"Trykk Ⓑ: Tilbake\n", L"Stisni Ⓑ: Povratak\n", L"Нажмите Ⓑ: Назад\n"};

