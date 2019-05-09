# BVE_ATSPITemp
ATS Plugin Template for BVEts5 by Tetsu Otter

## About this
ATSプラグインのまっさらなテンプレートです。packagesフォルダの下のファイル群を除き、CC0で利用できます。
詳しくは"LICENSE"を参照してください。

## C++版ATSプラグインテンプレートについて
ヘッダファイルを一から書き直し、デフォルトの処理も最小限のものしか実装していない、まっさらなテンプレートです。

便利機能もありません。将来的にも実装するつもりはありません。

## C#版ATSプラグインテンプレートについて
@ED67900_5@Twitter.com 氏の発見した方法をもとに、自分用にC++版のテンプレートの内容を移植したものになります。将来的に、openBVEも同じソースでできるようにするつもりです。

参考 : https://kagasu.hatenablog.com/entry/2017/12/31/220239

C++版と同様にCC0で利用できますが、このテンプレートはDllExportを使用しているため、それに関してはMIT Licenseが適用されます。誤ってLICENSEをどこにも含まないままで使用しないように注意してください。  
packagesフォルダは、gitignoreにてリポジトリに含まないよう設定しています。各自で参考リンクを参考にして、DllExportライブラリを導入してください。

DLLは、bin/x86/[BUILD_TYPE]/x86/[PI_NAME].dllのものを使用してください。間違えてbin/x86/[BUILD_TYPE]/[PI_NAME].dllを使用してしまうと、BVEにCannot check versionと怒られます。  
なお、[BUILD_TYPE]にはDebugもしくはRelease, [PI_NAME]にはプロパティで設定したアセンブリ名が入ります。

## つかいかた
各自でこのrepositoryをcloneしたうえで、必要ないほうのテンプレートプロジェクトを除去してください。

