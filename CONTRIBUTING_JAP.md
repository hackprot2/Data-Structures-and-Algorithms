＃貢献

このプロジェクトに貢献するためには、次のとおりです。

 - バグを報告する
 - コードの現在の状態について議論する
 - 修正提出する
 - 新機能の提案する
 - 管理者になる


##貢献のためのコース

*あなたが作業する問題について言及します。他の人に作業する案件が割り当てられていないことを確認するようにします。

*もしアルゴリズムが足りないと思われる場合は、問題を作成します。

### Pull Request作成

>  -  PRを作ろうとする課題に割り当てられていることを確認します。
>  - もし割り当てられる前にPRを作成する場合には、 `invalid（無効）`で表示され、マージされずに終了します。

*ストアをフォークして、あなたのコンピュータにコピーします。
*コピーされたストレージのメインbranchにupstream linkをよりしてください。
    `` `
    git remote add upstream https://github.com/div-bargali/Data-Structures-and-Algorithms.git
    `` `
* Upstreamから取得Cloneストアを最新の状態に維持します。 （この操作は、新しい変更をコミット中にマージの競合を防ぐこともできます）。
    `` `
    git pull upstream main https://github.com/div-bargali/Data-Structures-and-Algorithms.git
    `` `
*あなたのfeature branchを作りなさい。
    `` `
    git checkout -b <feature-name>
    `` `
*すべての変更にコミットしてください。
    `` `
    git commit -m "Meaningful commit message"
    `` `
*レビューのために変更をpushしてください。
    `` `
    git push origin <branch-name>
    `` `

* GitHubのプロジェクトのリポジトリにPRを作成します。

###その他の注意事項

*コードは、読みやすさのために適切に作成する必要があります。
*もしテストが必要なコードを追加する場合は、コメントにtestsを追加できます。
* Pythonの場合は、テストを提供するためにdocstringsを使用します。
*あなたのコードが正しくフォーマットされていることを確認してください。
*適切なディレクトリ構造を維持していることを確認してください：
    `` `
    <Language> / <Algorithms> / <Algorithm Paradigm> / <。 。 >
    `` `
    `` `
    <Language> / <Data Structures> / <Data Structure name> / <。 。 >
    `` `
*このPull requestを問題化してください！

##問題提起/バグを報告する

問題を作成するときに、すでに提示されたことがないことを確認します。さらに変更について適切な説明を提供しています。
もしいくつかのコードの改善事項について提示する場合には、その改善点の詳細を提示（提供）してください。

**大きい問題製の**は、以下の事項を持っている必要があります：

 - 変更の迅速な要約
 - 再処理の過程で生ずるもバグについて
     - 具体的これ！
     - 可能な場合、サンプルコードを提供する。
     - 予想日（問題）
     - 実際に発生した日（問題）
     - メモ（おそらくあなたがこれが起こるだろうと思ったことを含むか、試みたが、動作していないこと）

##参考

この文書は、[フェイスブックのDraft（ドラフト）]（https://github.com/facebook/draft-js/blob/a9316a723f9e918afde44dea68b5f9f39b7d9b00/CONTRIBUTING.md）のオープンソースの貢献ガイドラインから適用された。
