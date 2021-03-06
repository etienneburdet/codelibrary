<ods-dataset-context context="stats"
                     stats-dataset="resume-statistique-communes-departements-et-regions-france-2012-2013-2014"
                     stats-domain="public">
    <div class="container">
        <h1 class="titre">
            Dashboard template 1 <span class="smaller">by OpenDataSoft</span>
        </h1>
        <ods-tabs>
            <ods-pane title="Vue analytics 1" icon="pie-chart" pane-auto-unload="true">
                <div class="row">
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Population
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="population_en_2012">
                                {{ agg | number }}
                            </p>
                        </div>
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Nombre de ménages
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="menages_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                    <div class="box col-md-8">
                        <div class="grey-box">
                            <h2 class="title">
                                Evolution de la population
                            </h2>
                            <h3 class="description">
                                France 2007 et 2012
                            </h3>
                            <ods-chart single-y-axis="true">
                                <ods-chart-query context="stats" field-x="region" maxpoints="50" sort="serie1-1">
                                    <ods-chart-serie expression-y="population_en_2012" chart-type="column" function-y="AVG" color="#2C3F56" scientific-display="true">
                                    </ods-chart-serie>
                                    <ods-chart-serie expression-y="population_en_2007" chart-type="column" function-y="AVG" color="#EC643C" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </div>
                    </div>
                </div>
                <div class="row">
                    <div class="box col-md-8">
                        <div class="grey-box">
                            <h2 class="title">
                                Naissance par métropole
                            </h2>
                            <h3 class="description">
                                De 2007 à 2012
                            </h3>
                            <ods-chart single-y-axis="true">
                                <ods-chart-query context="stats" field-x="metropole" maxpoints="50">
                                    <ods-chart-serie expression-y="naissances_entre_2007_et_2012" chart-type="treemap" function-y="AVG" scientific-display="true">
                                    </ods-chart-serie>
                                </ods-chart-query>
                            </ods-chart>
                        </div>
                    </div>
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Actifs
                            </h2>
                            <h3 class="description">
                                15 - 64 ans en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="actifs_15_64_ans_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Chomeurs
                            </h2>
                            <h3 class="description">
                                15 - 64 ans en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="chomeurs_15_64_ans_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                </div>
            </ods-pane>
            <ods-pane title="Vue analytics 2" icon="map" pane-auto-unload="true">
                <div class="row">
                    <div class="box col-md-12">
                        <h2 class="grey-box">
                            Logements
                        </h2>
                    </div>
                </div>
                <div class="row">
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Nombre de logements
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="logements_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Résidences principales
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="residences_principales_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Résidences secondaires et logts occasionnels
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="res_secondaires_et_logts_occasionnels_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                </div>
                <div class="row">
                    <div class="box col-md-12">
                        <h2 class="grey-box">
                            Ménages fiscaux
                        </h2>
                    </div>
                </div>
                <div class="row">
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Nombre de ménages fiscaux
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="nombre_de_menages_fiscaux_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Part des ménages fiscaux imposés
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="SUM"
                               ods-aggregation-expression="part_des_menages_fiscaux_imposes_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                    <div class="box col-md-4">
                        <div class="grey-box half-box">
                            <h2 class="title">
                                Mediane du revenu disponible par US
                            </h2>
                            <h3 class="description">
                                en 2012
                            </h3>
                            <p class="kpi"
                               ods-aggregation="agg"
                               ods-aggregation-context="stats"
                               ods-aggregation-function="AVG"
                               ods-aggregation-expression="mediane_du_revenu_disponible_par_uc_en_2012">
                                {{ agg | number : 0 }}
                            </p>
                        </div>
                    </div>
                </div>
            </ods-pane>
        </ods-tabs>
    </div>
</ods-dataset-context>
