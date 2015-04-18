/*
 * Xournal++
 *
 * Error handler, prints a stacktrace if Xournal++ crashes
 *
 * @author Xournal++ Team
 * https://github.com/xournalpp/xournalpp
 *
 * @license GNU GPLv2
 */

#pragma once

class Document;
void setEmergencyDocument(Document* doc);
void installCrashHandlers(void);
