app_win=nil
app_dialog=nil

function OnQuit(button)
	Ftk.Quit()

	return RET_OK
end

function OnNormalQuit(button)
	print("OnNormalQuit")
	app_dialog:Unref();
	app_dialog=nil
	return RET_OK;
end

function OnModalQuit(button)
	print("OnModalQuit")
	return RET_QUIT;
end

function CreateDialog(modal)
	dialog=FtkDialog.Create(0, 40, 320, 240)
	width=dialog:Width()
	height=dialog:Height()

	theme=Ftk.DefaultTheme()
	icon=theme:LoadImage("info.png")
	dialog:SetIcon(icon)
	app_dialog = app_dialog

	label=FtkLabel.Create(dialog, width/6, height/4, 5*width/6, 20)
	label:SetText("Are you sure to quit?")
	
	button=FtkButton.Create(dialog, width/6, height/2, width/3, 50)
	button:SetText("yes")
	if modal==1 then
		button:SetClickedListener("OnModalQuit")
	else
		button:SetClickedListener("OnNormalQuit")
	end
	button=FtkButton.Create(dialog, width/2, height/2, width/3, 50)
	button:SetText("no")
	if modal==1 then
		button:SetClickedListener("OnModalQuit")
	else
		button:SetClickedListener("OnNormalQuit")
	end

	dialog:ShowAll(1)
	if modal==1 then
		dialog:Run()
		dialog:Unref()
		print("DialogQuit");
	end
end

function OnNormal(button)
	CreateDialog(0)
	return RET_OK
end

function OnModal(button)
	CreateDialog(1)
	return RET_OK
end

function AppInit()
	win=FtkAppWindow.Create()
	win:SetAttr(FTK_ATTR_QUIT_WHEN_CLOSE)
	win:SetText("Demo button")
	app_win=win

	local width=win:Width()
	local height=win:Height()

	button=FtkButton.Create(win, 0, height/6, width/3, 50)
	button:SetText("Norma")
	button:SetClickedListener("OnNormal")

	button=FtkButton.Create(win, 2*width/3, height/6, width/3, 50)
	button:SetText("Model")
	button:SetClickedListener("OnModal")

	button=FtkButton.Create(win, width/4, height/2, width/2, 60)
	button:SetText("quit")
	button:SetClickedListener("OnQuit")
	
	win:SetFocus(button)
	win:ShowAll(1)

	return 1
end

Ftk.Init(1, {"demo button"})
AppInit()
Ftk.Run()

