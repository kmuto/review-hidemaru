= ReVIEWタグ編集支援　秀丸マクロ集

Copyright 2008 Kenshi Muto <kmuto@debian.org>

Windowsの代表的なエディタのひとつである「秀丸」用のReVIEWタグ編集支援モードを作りました。

== [ショートカット操作]
本マクロをインストールすることで、.re拡張子のファイルを開いたときに、次のようなキー操作でReVIEWタグを挿入できます。

Ctrl+e f k	キーワード（@<kw>）を挿入する（キーワードは、ボールドにするとともに索引としても使われる）。範囲選択しているときにはそれを囲む
Ctrl+e f b	ボールド（@<b>）を挿入する。範囲選択しているときにはそれを囲む
Ctrl+e f i	イタリック（@<i>）を挿入する。範囲選択しているときにはそれを囲む
Ctrl+e f t	等幅（@<tt>）を挿入する。範囲選択しているときにはそれを囲む
Ctrl+e f a	吹き出し（@<a>）を挿入する。範囲選択しているときにはそれを囲む
Ctrl+e f d	埋め込み索引（@<idx>）を挿入する（埋め込み索引は、本文のテキストとして使われるとともに索引としても使われる）。範囲選択しているときにはそれを囲む
Ctrl+e f h	隠し索引（@<hidx>）を挿入する（隠し索引は、本文には表示されない）。範囲選択しているときにはそれを囲む
Ctrl+e a	編集者コメント（◆→〜 -編集者←◆）を挿入する
Ctrl+e h 1	レベル1ヘッダ（=）を挿入する
Ctrl+e h 2	レベル2ヘッダ（==）を挿入する
Ctrl+e h 3	レベル3ヘッダ（===）を挿入する
Ctrl+e h 4	レベル4ヘッダ（====）を挿入する
Ctrl+e h 5	レベル5ヘッダ（=====）を挿入する
Ctrl+e <	生XMLの開きタグ（//raw[<〜>]）を挿入する
Ctrl+e >	生XMLの閉じタグ（//raw[/<〜>]）を挿入する

== [インストール]
秀丸がC:\Program Files\Hidemaruにインストールされているものとし、ReVIEW入力ショートカットの呼び出しはCtrl+Eを使うものとします。

 1. このアーカイブ内にある *.macファイルおよび *.hilightファイルを、C:\Program Files\Hidemaruにコピーします。
 2. このファイル（README.re）を秀丸で開きます。
 3. README.reを開いている状態で、「その他」→「ファイルタイプ別の操作」を選びます。
 4. 「設定のリスト」をクリックします。
 5. 「HTMLファイル」をクリックしてから「コピー」をクリックし、「ReVIEW」という名前でコピーします。「閉じる」を選んで「ファイルタイプ別の操作」ダイアログに戻ります。
 6. 「.REの設定」のプルダウンから「ReVIEW」を選んだ状態にします。
 7. 「デザイン」をクリックして、「保存/読込」→「読み込み」を実行します。
 8. 「ReVIEW.hilight」を選択し、「全てオン」をクリックして、「OK」をクリックします。
 9. 好みにもよりますが、「タブ文字を記号で表示」「全角空白を記号で表示」「対応する括弧を強調表示」をチェックあり、「メールアドレスのカラー表示」「ホームページURLのカラー表示」「ファイル名と思わしき場所のカラー表示」をチェックなし にすることをお勧めします。
 10. 「OK」をクリックして、ダイアログを閉じます。
 11. 「マクロ」→「マクロ登録」を選びます。
 12. マクロ登録ダイアログが開くので、後半で空いている領域（たとえば「51〜60」）を選びます。
 13. 「グループ名」に「ReVIEW」と記入します。
 14. マクロを順に登録します。「...」をクリックして、review-*.macのマクロファイルを指定し、呼び出し時の名前を付けます。たとえば次のようにするとよいでしょう。
	* 51. ReVIEWフォント	review-font.mac
	* 52. ReVIEWコメント	review-comment.mac
	* 53. ReVIEWヘッダ	review-header.mac
	* 54. ReVIEW開きタグ	review-openraw.mac
	* 55. ReVIEW閉じタグ	review-closeraw.mac

 15. すべての登録を終えたら、「OK」をクリックしてダイアログを閉じます。
 16. 「その他」→「メニュー編集」を選び、「ユーザーメニュー」タブをクリックします。
 17. 「メニュー」から、空いているメニューを選びます。たとえば「メニュー4」を使うものとします。
 18. 「タイトル」にこのメニュー名を指定します。ここでは「Ctrl+E」としておくことにします。
 19. 「遅延時間」を1.0秒になるように矢印ボタンで調整します。この遅延時間は、キー操作したときにヘルプ用のメニューをポップアップするまでの時間を示します。
 20. マクロの呼び出しを順に登録します。「追加」をクリックして、「コマンド」のプルダウンメニューから「メニュー/マクロ」を選び、登録するマクロを選びます。さらに、このマクロにアクセスするためのキー1文字を入力します。たとえば次のようにするとよいでしょう。

	* マクロ51 ReVIEWフォント	F
	* マクロ52 ReVIEWコメント	A
	* マクロ53 ReVIEWヘッダ		H
	* セパレータ
	* マクロ54 ReVIEW開きタグ	<
	* マクロ55 ReVIEW閉じタグ	>

 21. 「OK」をクリックしてダイアログを閉じます。
 22. 「その他」→「キー割り当て」を選びます。
 23. 「Ctrl」にチェックを入れ、「キー」から「Ctrl+E」を選びます。
 24. 「コマンド」のプルダウンメニューから「メニュー/マクロ」を選び、「メニュー4:Ctrl+E」を選択します。
 25. 「OK」をクリックしてダイアログを閉じます。

お疲れ様でした。以上でインストールは終了です。
色やキー操作が気に入らないときには、適宜各ダイアログから変更してください。
