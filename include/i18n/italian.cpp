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

// Translated by theheroGAC

std::map<std::string, std::wstring> ITALIAN = {
	// UI.CPP
	{"scanning",            L"Scansione dei temi..."},
	{"error_message",       L"Si è verificato un errore. Hai la versione di 3DSThemeManager %s."},
	{"press_start",         L"Premere START per abbandonare."},
	{"themes",              L"%i theme%ls"}, // %ls è un suffisso plurale
	{"plural_suffix",       L"s"},
	{"qr_scanner",          L"QR Code scanner"},
	{"by",                  L"di %ls"},
	{"add_to_shuffle",      L"Aggiungere"},
	{"remove_from_shuffle", L"Rimuovi"},
	{"install",             L"Installa"},
	{"w_o_bgm",             L"senza BGM"},
	{"fullscreen_prev",     L"Anteprima in Fullscreen"},
	{"hold_delete",         L"[tenere] cancella"},
	{"bgm_prev",            L"Anteprima del BGM"},
	{"installing",          L"Installazione..."},
	{"downloading",         L"Scaricamento..."},
	{"new_update",          L"E' disponibile un nuovo aggiornamento!"},
	{"delete_prompt_1",     L"Sei sicuro di volere"},
	{"delete_prompt_2",     L"cancellare questo tema?"},
	{"dump_prompt",         L"Scollegare il tema attualmente installato?"},
	{"dump_prompt_warn",    L"Per favore non inviare temi ufficiali a ThemePlaza!"},
	{"playing",             L"Riproduzione..."},
	{"no_themes_1",         L"Nessun tema trovato!"},
	{"no_themes_2",         L"Vai all'indirizzo ThemePlaza sul tuo computer, scarica alcuni temi,"},
	{"no_themes_3",         L"e inserirli nella cartella /Themes nella tua SD Card."},
	{"shuffle_count",       L"%i/10 temi%ls selezionati"},
	{"qr_explain_1",        L"Effettua la scansione di un codice QR per un collegamento"},
	{"qr_explain_2",        L"diretto a un file ZIP di un tema per scaricarlo."},
	{"qr_explain_3",        L"Vai all'indirizzo ThemePlaza, seleziona, quindi fare clic sul"},
	{"qr_explain_4",        L"pulsante del codice QR per visualizzare il codice QR."},
	{"update_prompt",       L"Installare questo aggiornamento?"},
	{"yes",                 L"Si"},
	{"no",                  L"No"},
	{"stop_bgm",            L"Premere (Y) per fermare."},
	// THEME.CPP
	{"no_desc",             L"[descrizione non disponibile]"},
	{"unknown",             L"Sconosciuto"},
	{"install_reading",     L"Lettura in corso del %s..."},
	{"install_writing",     L"Scrittura in corso del %s..."},

	// ERRORS
	// AUDIO.CPP
	{"err_bgm_fail",       L"Impossibile riprodurre il BGM"},
	// UI.CPP
	{"err_texture",        L"Impossibile caricare le texture."},
	// NETWORK.CPP
	{"err_update_dl_fail", L"Scaricamento dell'aggiornamento fallito."},
	{"err_update_manual",  L"Se hai ancora problemi,prova ad aggiornare manualmente."},
	{"err_update_titledb", L"Se hai ancora problemi, prova ad aggiornare FBI -> TitleDB."},
	{"err_zip_dl_fail",    L"Scaricamento del file ZIP fallito"},
	{"err_zip_invalid",    L"Il file ZIP non è valido"},
	{"err_zip_no_body",    L"Il file ZIP non contiene il file body_LZ.bin nella cartella principale"},
	// THEME.CPP
	{"err_fail_open",      L"Apertura fallita di %s."},
	{"err_fail_read",      L"Lettura fallita di %s."},
	{"err_fail_write",     L"Scrittura fallita di %s."},
	{"err_try_default",    L"Provare a selezionare uno dei temi predefiniti nelle impostazioni del menu prima di riprovare"},
	// err_bgm_too_big
	{"err_no_dsp",         L"DSP dump non trovato! Utilizzare DSP1 per scaricare il firmware DSP richiesto per riprodurre l'audio."}
};
