// Copyright (C) 2017 ErmanSayin
// 
// This file is part of Themely.
// 
// Themely is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Themely is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Themely.  If not, see <http://www.gnu.org/licenses/>.
// 

#include <string>
#include <map>

// Translated by ZetaDesigns, Brawl345

std::map<std::string, std::wstring> GERMAN = {
	// UI.CPP
	{"scanning",            L"Suche nach Themes..."},
	{"error_message",       L"Ein Fehler ist aufgetreten. Deine 3DSThemeManager Version ist %s."},
	{"press_start",         L"Drücke Start zum Beenden."},
	{"themes",              L"%i Themes%ls"},
	{"plural_suffix",       L""},
	{"qr_scanner",          L"QR-Code-Scanner"},
	{"by",                  L"von %ls"},
	{"add_to_shuffle",      L"Zu Shuffle hinzufügen"},
	{"remove_from_shuffle", L"Von Shuffle entfernen"},
	{"install",             L"Installieren"},
	{"w_o_bgm",             L"ohne BGM"},
	{"fullscreen_prev",     L"Vollbildvorschau"},
	{"hold_delete",         L"[halten] löschen"},
	{"bgm_prev",            L"BGM-Vorschau"},
	{"installing",          L"Installiere..."},
	{"downloading",         L"Downloade..."},
	{"new_update",          L"Ein neues Update ist verfügbar!"},
	{"delete_prompt_1",     L"Bist du sicher, dass du"},
	{"delete_prompt_2",     L"dieses Theme löschen willst?"},
	{"dump_prompt",         L"Gerade genutztes Theme dumpen?"},
	{"dump_prompt_warn",    L"Bitte lade keine offiziellen Themes auf ThemePlaza hoch!"},
	{"playing",             L"Spiele..."},
	{"no_themes_1",         L"Keine Themes gefunden!"},
	{"no_themes_2",         L"Gehe zu ThemePlaza, lade ein paar Themes herunter,"},
	{"no_themes_3",         L"und ziehe diese dann in den /Themes Ordner auf deiner SD-Karte"},
	{"shuffle_count",       L"%i/10 Themes für Shuffle ausgewählt.%ls"},
	{"qr_explain_1",        L"Scanne einen QR-Code mit dem direkten Link"},
	{"qr_explain_2",        L"zu einer ZIP-Datei eines Themes, um es zu downloaden."},
	{"qr_explain_3",        L"Gehe zu ThemePlaza und klicke auf den"},
	{"qr_explain_4",        L"QR-Code-Knopf um den QR-Code für das Theme zu sehen."},
	{"update_prompt",       L"Dieses Update installieren?"},
	{"yes",                 L"Ja"},
	{"no",                  L"Nein"},
	{"stop_bgm",            L"Drücke (Y) zum Stoppen."},
	// THEME.CPP
	{"no_desc",             L"[Beschreibung nicht verfügbar]"},
	{"unknown",             L"Unbekannt"},
	{"install_reading",     L"Lade %s..."},
	{"install_writing",     L"Schreibe %s..."},

	// ERRORS
	// AUDIO.CPP
	{"err_bgm_fail",       L"Konnte BGM nicht abspielen."},
	// UI.CPP
	{"err_texture",        L"Konnte Texturen nicht laden."},
	// NETWORK.CPP
	{"err_update_dl_fail", L"Konnte Update nicht herunterladen."},
	{"err_update_manual",  L"Solltest du immer noch Probleme haben, aktualisiere manuell."},
	{"err_update_titledb", L"Solltest du immer noch Probleme haben, aktualisiere über FBI -> TitleDB."},
	{"err_zip_dl_fail",    L"Konnte ZIP nicht herunterladen."},
	{"err_zip_invalid",    L"Die ZIP-Datei ist nicht gültig."},
	{"err_zip_no_body",    L"Die ZIP-Datei enthält keine body_LZ.bin."},
	// THEME.CPP
	{"err_fail_open",      L"Konnte %s nicht öffnen."},
	{"err_fail_read",      L"Konnte %s nicht lesen."},
	{"err_fail_write",     L"Konnte auf %s nicht schreiben."},
	{"err_try_default",    L"Versuche erst eines der normalen Themes im HOME-Menü auszuwählen, und probiere es noch einmal"},
	// err_bgm_too_big
	{"err_no_dsp",         L"DSP-Dump nicht gefunden! Du brauchst einen Dump deiner DSP-Firm um Audio abzuspielen. Verwenden Sie DSP1, um DSP zu extrahieren."}
};
