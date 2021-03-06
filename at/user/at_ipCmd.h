/*
 * File	: at_ipCmd.h
 * This file is part of Espressif's AT+ command set program.
 * Copyright (C) 2013 - 2016, Espressif Systems
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of version 3 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __AT_IPCMD_H
#define __AT_IPCMD_H

#define at_linkMax 5

typedef enum
{
  teClient,
  teServer
}teType;

typedef struct
{
	BOOL linkEn;
  BOOL teToff;
	uint8_t linkId;
	teType teType;
	uint8_t repeaTime;
	uint8_t changType;
	uint8 remoteIp[4];
	int32_t remotePort;
	struct espconn *pCon;
}at_linkConType;
// Вывести статус в консоль
void at_testCmdCifsr(uint8_t id);
// Установить софтварный IP адресс
void at_setupCmdCifsr(uint8_t id, char *pPara);
// Получить железный и софтварный IP
void at_exeCmdCifsr(uint8_t id);
// Вывести статус в консоль
void at_testCmdCipstatus(uint8_t id);
// Вывести TCP и UDP порты
void at_exeCmdCipstatus(uint8_t id);
// Вывести 2 раза название команды с или с ID или без ID
void at_testCmdCipstart(uint8_t id);
// Настроить табицу внутренней маршрутизации
void at_setupCmdCipstart(uint8_t id, char *pPara);
// Вывести статус в консоль
void at_testCmdCipclose(uint8_t id);
// Преотключение: Отключить линк и убрать из таблицы маршрутизации
void at_setupCmdCipclose(uint8_t id, char *pPara);
// Постотключение и перезагрузка: Отключить линк и убрать из таблицы маршрутизации
void at_exeCmdCipclose(uint8_t id);
// Вывести статус в консоль 
void at_testCmdCipsend(uint8_t id);
// Проверка длинны пакета не более 2048
void at_setupCmdCipsend(uint8_t id, char *pPara);
// Разделяют данные "+++" и отправка данных через 2 вложенные функции
void at_exeCmdCipsend(uint8_t id);
// Информация о мультилинк режиме
void at_queryCmdCipmux(uint8_t id);
// Установка флагов о мультилинке
void at_setupCmdCipmux(uint8_t id, char *pPara);
// Настройка TCP сервера на порту 333
void at_setupCmdCipserver(uint8_t id, char *pPara);
// Вывести в консоль какой прозрачный или нет режим используется
void at_queryCmdCipmode(uint8_t id);
// Установка режима прозрачности
void at_setupCmdCipmode(uint8_t id, char *pPara);
// Вывести таймаут
void at_queryCmdCipsto(uint8_t id);
// Установить таймаут соединения
void at_setupCmdCipsto(uint8_t id, char *pPara);
// Обновление через воздух с сервера iot.espressif.cn
void at_exeCmdCiupdate(uint8_t id);
// Вывести статус в консоль
void at_exeCmdCiping(uint8_t id);
// Неизвестное назначение функции
void at_exeCmdCipappup(uint8_t id);

#endif
