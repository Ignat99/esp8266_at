/*
 * File	: at_wifiCmd.h
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
#ifndef __AT_WIFICMD_H
#define __AT_WIFICMD_H
// Послать в UART название команды по её индексу
void at_testCmdCwmode(uint8_t id);
// Распечатать в UART режим WiFi
void at_queryCmdCwmode(uint8_t id);
// В этих исходниках все 3 режима одно и то же
// видимо планировали UART, WiFi или оба режима сразу
void at_setupCmdCwmode(uint8_t id, char *pPara);
// Возможность различных типов сканирования
//void at_testCmdCwjap(uint8_t id);
//Подсоединиться к точке доступа
void at_queryCmdCwjap(uint8_t id);
// Установить пароль на точку доступа
void at_setupCmdCwjap(uint8_t id, char *pPara);
// Установить имя ssid аксес поинт 
void at_setupCmdCwlap(uint8_t id, char *pPara);
// Вывести список точек доступа
void at_exeCmdCwlap(uint8_t id);
// Хак - достать IP из списка
// Вывести в UART текст
void at_testCmdCwqap(uint8_t id);
// Отсоедениться от точки доступа
void at_exeCmdCwqap(uint8_t id);
// Элементарные параметры точки доступа
void at_queryCmdCwsap(uint8_t id);
// Простые проверки и установка основных параметров - ssid, пароль, номер канала
void at_setupCmdCwsap(uint8_t id, char *pPara);
// Показать IP и MAC каждой станции
void at_exeCmdCwlif(uint8_t id);
// Просто выделить буфер внутри функции
void at_queryCmdCwdhcp(uint8_t id);
// Мягкий старт 0 (считать из памяти), нормальный старт 1, вначале мягкий, если не получилось нормальный 2
void at_setupCmdCwdhcp(uint8_t id, char *pPara);
// Запросить MAC адресс железный
void at_queryCmdCipstamac(uint8_t id);
// Установить MAC адресс железный
void at_setupCmdCipstamac(uint8_t id, char *pPara);
// Запросить MAC адресс софтварный
void at_queryCmdCipapmac(uint8_t id);
// Установить MAC адресс софтварный
void at_setupCmdCipapmac(uint8_t id, char *pPara);
// Вывести железный IP
void at_queryCmdCipsta(uint8_t id);
// Установить железный IP
void at_setupCmdCipsta(uint8_t id, char *pPara);
// Вывести софтварный IP
void at_queryCmdCipap(uint8_t id);
// Установить софтварный IP
void at_setupCmdCipap(uint8_t id, char *pPara);

#endif
