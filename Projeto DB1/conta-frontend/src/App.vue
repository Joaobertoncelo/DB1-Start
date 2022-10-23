<template>
  <v-app>
    <div>
      <v-toolbar class=primary>
        <v-toolbar-title>Sua Conta</v-toolbar-title>

        <v-spacer></v-spacer>

        <v-toolbar-items>
          <router-link to="/">
            <v-btn class="link" text>Home</v-btn>
          </router-link>
          <router-link to="/marcar-eventos">
            <v-btn class="link" text>Marcar Eventos</v-btn>
          </router-link>
          <router-link to="/cidades">
            <v-btn class="link" text>Cidades</v-btn>
          </router-link>
          <router-link to="/agencias">
            <v-btn class="link" text>Agências</v-btn>
          </router-link>
          <router-link to="/clientes">
            <v-btn class="link" text>Clientes</v-btn>
          </router-link>
        </v-toolbar-items>
      </v-toolbar>
    </div>
    <router-view></router-view>
  </v-app>
</template>
<style scoped>
  .link{
    margin-top: 14px;
    color:red;
  }
</style>

