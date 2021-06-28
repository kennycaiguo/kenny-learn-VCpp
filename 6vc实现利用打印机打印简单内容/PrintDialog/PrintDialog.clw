; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CPrintDialogDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "PrintDialog.h"

ClassCount=4
Class1=CPrintDialogApp
Class2=CPrintDialogDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_PRINTDIALOG_DIALOG

[CLS:CPrintDialogApp]
Type=0
HeaderFile=PrintDialog.h
ImplementationFile=PrintDialog.cpp
Filter=N

[CLS:CPrintDialogDlg]
Type=0
HeaderFile=PrintDialogDlg.h
ImplementationFile=PrintDialogDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=PrintDialogDlg.h
ImplementationFile=PrintDialogDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_PRINTDIALOG_DIALOG]
Type=1
Class=CPrintDialogDlg
ControlCount=1
Control1=IDC_PRINT,button,1342242816

